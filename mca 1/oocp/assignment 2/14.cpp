//14) Write a generic function that will sort a character string, integer and float
//value. Create a menu with appropriate options and accept the values from the
//user.


#include <iostream>
#include <string>
using namespace std;


template <typename T>
void sortArray(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


template <typename T>
void displayArray(T arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main() {
    int choice;

    do {
        cout << "\n====== MENU ======" << endl;
        cout << "1. Sort Integer Array" << endl;
        cout << "2. Sort Float Array" << endl;
        cout << "3. Sort Character String" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int n;
            cout << "Enter number of integers: ";
            cin >> n;
            int *arr = new int[n];
            cout << "Enter " << n << " integers: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];

            sortArray(arr, n);
            cout << "Sorted Integers: ";
            displayArray(arr, n);
            delete[] arr;

        } else if (choice == 2) {
            int n;
            cout << "Enter number of floats: ";
            cin >> n;
            float *arr = new float[n];
            cout << "Enter " << n << " floats: ";
            for (int i = 0; i < n; i++)
                cin >> arr[i];

            sortArray(arr, n);
            cout << "Sorted Floats: ";
            displayArray(arr, n);
            delete[] arr;

        } else if (choice == 3) {
            string str;
            cout << "Enter a string: ";
            cin >> str;
            int n = str.length();
            char *arr = new char[n];

            for (int i = 0; i < n; i++)
                arr[i] = str[i];

            sortArray(arr, n);
            cout << "Sorted String: ";
            for (int i = 0; i < n; i++)
                cout << arr[i];
            cout << endl;

            delete[] arr;

        } else if (choice == 4) {
            cout << "Exiting program..." << endl;
        } else {
            cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 4);

    return 0;
}

/*
Output :
	
====== MENU ======
1. Sort Integer Array
2. Sort Float Array
3. Sort Character String
4. Exit
Enter your choice: 1
Enter number of integers: 5
Enter 5 integers: 10
50
80
90
60
Sorted Integers: 10 50 60 80 90

====== MENU ======
1. Sort Integer Array
2. Sort Float Array
3. Sort Character String
4. Exit
Enter your choice: 2
Enter number of floats: 5
Enter 5 floats: 1.1
2.5
1.0
2.6
9.8
Sorted Floats: 1 1.1 2.5 2.6 9.8

====== MENU ======
1. Sort Integer Array
2. Sort Float Array
3. Sort Character String
4. Exit
Enter your choice: 3
Enter a string: vivek
Sorted String: eikvv

====== MENU ======
1. Sort Integer Array
2. Sort Float Array
3. Sort Character String
4. Exit
Enter your choice:
*/
