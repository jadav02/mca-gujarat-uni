//10) Write a template function to make sum of two numbers.

#include <iostream>
using namespace std;


template <typename T>
T sum(T a, T b) {
    return a + b;
}


int main() {
    cout << "Sum of integers: " << sum(5, 10) << endl;
    cout << "Sum of floats: " << sum(2.5f, 3.7f) << endl;
    cout << "Sum of doubles: " << sum(4.123, 7.456) << endl;
    cout << "Sum of characters: " << sum('A', 'B') << " (ASCII sum)" << endl;

    return 0;
}

/*
Output :

Sum of integers: 15
Sum of floats: 6.2
Sum of doubles: 11.579
Sum of characters: â (ASCII sum)
*/
