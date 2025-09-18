//8) Write a menu driven program that can perform the following functions on strings. (Use overloaded operators where possible).(Do not use predefined string function or class.)
//1. Compare two strings for equality (== operator)
//2. Check whether first string is smaller than the second (<= operator)
//3. Copy the string to another
//4. Extract a character from the string (Overload [])
//5. Reverse the string
//6. Concatenate two strings (+ operator)

#include<iostream>
using namespace std;

class MyString{
	char str[100];
	
public:
	MyString(){
		str[0] = '\0';
	}
	
	MyString(const char s[]){
		int i=0;
		while(s[i] != '\0'){
			str[i] = s[i];
			i++;
		}
		str[i] = '\0';

	}
	
	void display() const{
		cout<< str;
	}
	
	bool operator==(const MyString &s){
		int i=0;
		while(str[i] != '\0' && s.str[i] != '\0'){
			if(str[i] != s.str[i]) 
				return false;
			i++;
		}
		return(str[i] == '\0' && s.str[i] == '\0');
	}
	
	bool operator<=(const MyString &s){
		int i=0;
		while(str[i] != '\0' && s.str[i] != '\0'){
			if(str[i] < s.str[i])
				return true;
			else if(str[i] > s.str[i])
				return false;
			i++; 
		}
		return(str[i] == '\0');
	}
	
	MyString& operator=(const MyString &s){
		if(this != &s){
			int i=0;
			while(s.str[i] != '\0'){
				str[i] = s.str[i];
				i++;
			}
			str[i] = '\0';
		}
		return *this;
	}
	
	char operator[](int index){
		return str[index];
	}
	
	MyString reverse(){
		 MyString temp;
        int len=0;
        while(str[len] != '\0') 
			len++;

        for(int i=0; i<len; i++) {
            temp.str[i] = str[len-1-i];
        }
        temp.str[len] = '\0';
        return temp;
	}
	
	MyString operator+(const MyString &s) {
        MyString temp;
        int i=0, j=0;
        while(str[i] != '\0') {
            temp.str[i] = str[i];
            i++;
        }
        while(s.str[j] != '\0') {
            temp.str[i] = s.str[j];
            i++; j++;
        }
        temp.str[i] = '\0';
        return temp;
    }
	
};

int main() {
    MyString s1, s2, s3;
    int choice;
    char input[100];

    cout << "Enter first string: ";
    cin >> input;
    s1 = MyString(input);

    cout << "Enter second string: ";
    cin >> input;
    s2 = MyString(input);

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Compare two strings for equality (==)\n";
        cout << "2. Check if first string <= second string\n";
        cout << "3. Copy first string into another\n";
        cout << "4. Extract a character using []\n";
        cout << "5. Reverse first string\n";
        cout << "6. Concatenate two strings (+)\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                if(s1 == s2) 
					cout << "Strings are equal\n";
                else 
					cout << "Strings are not equal\n";
                break;

            case 2:
                if(s1 <= s2)
					cout << "First string is smaller or equal\n";
                else 
					cout << "First string is greater\n";
                break;

            case 3:
                s3 = s1;
                cout << "Copied string: ";
                s3.display();
                cout << endl;
                break;

            case 4: {
                int index;
                cout << "Enter index: ";
                cin >> index;
                cout << "Character at index " << index << ": " << s1[index] << endl;
                break;
            }

            case 5:
                s3 = s1.reverse();
                cout << "Reversed string: ";
                s3.display();
                cout << endl;
                break;

            case 6:
                s3 = s1 + s2;
                cout << "Concatenated string: ";
                s3.display();
                cout << endl;
                break;

            case 7:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    } while(choice != 7);

    return 0;
}
/*
output :

Enter first string: abcd
Enter second string: efgh

--- MENU ---
1. Compare two strings for equality (==)
2. Check if first string <= second string
3. Copy first string into another
4. Extract a character using []
5. Reverse first string
6. Concatenate two strings (+)
7. Exit
Enter your choice: 1
Strings are not equal

--- MENU ---
1. Compare two strings for equality (==)
2. Check if first string <= second string
3. Copy first string into another
4. Extract a character using []
5. Reverse first string
6. Concatenate two strings (+)
7. Exit
Enter your choice: 2
First string is smaller or equal

--- MENU ---
1. Compare two strings for equality (==)
2. Check if first string <= second string
3. Copy first string into another
4. Extract a character using []
5. Reverse first string
6. Concatenate two strings (+)
7. Exit
Enter your choice: 3
Copied string: abcd

--- MENU ---
1. Compare two strings for equality (==)
2. Check if first string <= second string
3. Copy first string into another
4. Extract a character using []
5. Reverse first string
6. Concatenate two strings (+)
7. Exit
Enter your choice: 4
Enter index: 1
Character at index 1: b

--- MENU ---
1. Compare two strings for equality (==)
2. Check if first string <= second string
3. Copy first string into another
4. Extract a character using []
5. Reverse first string
6. Concatenate two strings (+)
7. Exit
Enter your choice: 5
Reversed string: dcba

--- MENU ---
1. Compare two strings for equality (==)
2. Check if first string <= second string
3. Copy first string into another
4. Extract a character using []
5. Reverse first string
6. Concatenate two strings (+)
7. Exit
Enter your choice: 6
Concatenated string: abcdefgh

--- MENU ---
1. Compare two strings for equality (==)
2. Check if first string <= second string
3. Copy first string into another
4. Extract a character using []
5. Reverse first string
6. Concatenate two strings (+)
7. Exit
Enter your choice:7*/
