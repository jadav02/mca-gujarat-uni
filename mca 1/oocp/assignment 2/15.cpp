//15) Write a template function called find(). This function searches an array for an
//object. It returns either the index of the matching object (if one is found) or
//-1 if no match is found.


#include <iostream>
using namespace std;


template <typename T>
int find(T arr[], int n, T key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int intArr[] = {10, 20, 30, 40, 50};
    int intSize = 5;
    int intKey = 30;
    cout << "Searching " << intKey << " in intArr ? Index: "
         << find(intArr, intSize, intKey) << endl;


    float floatArr[] = {1.1f, 2.2f, 3.3f, 4.4f};
    int floatSize = 4;
    float floatKey = 4.4f;
    cout << "Searching " << floatKey << " in floatArr ? Index: "
         << find(floatArr, floatSize, floatKey) << endl;


    char charArr[] = {'a', 'e', 'i', 'o', 'u'};
    int charSize = 5;
    char charKey = 'o';
    cout << "Searching '" << charKey << "' in charArr ? Index: "
         << find(charArr, charSize, charKey) << endl;


    int missingKey = 99;
    cout << "Searching " << missingKey << " in intArr ? Index: "
         << find(intArr, intSize, missingKey) << endl;

    return 0;
}

//Output :

//Searching 30 in intArr ? Index: 2
//Searching 4.4 in floatArr ? Index: 3
//Searching 'o' in charArr ? Index: 3
//Searching 99 in intArr ? Index: -1
