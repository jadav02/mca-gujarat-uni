//11) Write a program to generate templates function for swapping values of
//variables and show its use with integer, float and character type of data as
//input.

#include <iostream>
using namespace std;


template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    float p = 2.5f, q = 7.8f;
    char c1 = 'A', c2 = 'Z';

    cout << "Before swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "p = " << p << ", q = " << q << endl;
    cout << "c1 = " << c1 << ", c2 = " << c2 << endl;

   
    swapValues(x, y);
    swapValues(p, q);
    swapValues(c1, c2);

    cout << "\nAfter swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "p = " << p << ", q = " << q << endl;
    cout << "c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}

/*
Output :

Before swapping:
x = 10, y = 20
p = 2.5, q = 7.8
c1 = A, c2 = Z

After swapping:
x = 20, y = 10
p = 7.8, q = 2.5
c1 = Z, c2 = A

*/
