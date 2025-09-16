#include<iostream>
#include<string>

using namespace std;

class Student{
	private:
		int rollno;
    	string name;
    	int age;
    	int marks[3];
    
    public:
    	//constructor
    	Student(int r=0, string n="" , int a=0){
    		rollno = r;
        	name = n;
        	age = a;
        	for (int i = 0; i < 3; i++) {
            marks[i] = 35; // minimum pass mark is 35
        	}
		}
		
		void display(){
			cout << "Roll No: " << rollno << ", Name: " << name << ", Age: " << age << endl;
        	cout << "Marks: ";
        	for (int i = 0; i < 3; i++) {
            	cout << marks[i] << " ";
        	}
        	cout << endl;
		}
		
		void change(int r) {
        if (rollno == r) {
            cout << "Enter new marks for 3 subjects of Roll No " << rollno << ": ";
            for (int i = 0; i < 3; i++) {
                cin >> marks[i];
            }
            cout << "Marks updated successfully!" << endl;
        	}
   		}

   	 	int getRollNo() {
        	return rollno;
    	}

};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[100]; 
    int roll; string name; int age;

    // input student details
    for (int i = 0; i < n; i++) {
        cout << "Enter Roll No:";
        cin >> roll;
        cout << "Enter Name:";
        cin>>name;
        cout << "Enter age:";
        cin >> age;
		cout<<"----------------------------------\n";

        
        s[i] = Student(roll, name, age);
    }

    // display students before change
    cout << "\n--- Student Details Before change ---\n";
    for (int i = 0; i < n; i++) {
        s[i].display();
    }

    // ask roll number to change marks
    int searchRno;
    cout << "\nEnter roll number of student to change marks: ";
    cin >> searchRno;

    for (int i = 0; i < n; i++) {
        s[i].change(searchRno);
    }

    // display students after change
    cout << "\n--- Student Details After change ---\n";
    for (int i = 0; i < n; i++) {
        s[i].display();
    }

    return 0;
}
