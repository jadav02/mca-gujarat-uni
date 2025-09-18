//12) Write an object-oriented program to implement a generic Number Class that
//can accept either int or float data type and perform basic calculation like +,-,/
//and *.

#include <iostream>
using namespace std;


template <typename T>
class Number {
    T value;

public:
 
    Number(T v = 0) {
        value = v;
    }

    
    T getValue() const {
        return value;
    }

    
    Number operator+(const Number &obj) {
        return Number(value + obj.value);
    }

    Number operator-(const Number &obj) {
        return Number(value - obj.value);
    }

    Number operator*(const Number &obj) {
        return Number(value * obj.value);
    }

    Number operator/(const Number &obj) {
        if (obj.value == 0) {
            cout << "Error: Division by zero!" << endl;
            return Number(0);
        }
        return Number(value / obj.value);
    }

    void display() const {
        cout << value;
    }
};


int main() {
    
    Number<int> n1(20), n2(10);
    cout << "Integer Operations:" << endl;
    cout << "n1 + n2 = "; (n1 + n2).display(); cout << endl;
    cout << "n1 - n2 = "; (n1 - n2).display(); cout << endl;
    cout << "n1 * n2 = "; (n1 * n2).display(); cout << endl;
    cout << "n1 / n2 = "; (n1 / n2).display(); cout << endl;

    
    Number<float> f1(5.5f), f2(2.2f);
    cout << "\nFloat Operations:" << endl;
    cout << "f1 + f2 = "; (f1 + f2).display(); cout << endl;
    cout << "f1 - f2 = "; (f1 - f2).display(); cout << endl;
    cout << "f1 * f2 = "; (f1 * f2).display(); cout << endl;
    cout << "f1 / f2 = "; (f1 / f2).display(); cout << endl;

    return 0;
}

/*
Output :

Integer Operations:
n1 + n2 = 30
n1 - n2 = 10
n1 * n2 = 200
n1 / n2 = 2

Float Operations:
f1 + f2 = 7.7
f1 - f2 = 3.3
f1 * f2 = 12.1
f1 / f2 = 2.5

*/
