#include <iostream>
using namespace std;

class Search {
private:
    int a[50];   // array
    int n;       // size of array

public:
    // take input
    void input() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter " << n << " elements:\n";
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
    }

    // display array
    void output() {
        cout << "Array elements are: ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    // search by position
    void search(int pos) {
        if (pos < 0 || pos >= n) {
            cout << "Invalid position!" << endl;
        } else {
            cout << "Element at position " << pos << " = " << a[pos] << endl;
        }
    }

    // add value at end
    void add(int value) {
        if (n < 50) {
            a[n] = value;
            n++;
            cout << "Value " << value << " added successfully." << endl;
        } else {
            cout << "Array is full! Cannot add more elements." << endl;
        }
    }
};

int main() {
    Search s;
    s.input();
    s.output();

    int pos;
    cout << "Enter position to search: ";
    cin >> pos;
    s.search(pos);

    int val;
    cout << "Enter value to add: ";
    cin >> val;
    s.add(val);

    s.output();  // show updated array

    return 0;
}

