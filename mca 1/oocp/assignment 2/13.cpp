//13) Write an object-oriented program to implement a generic Stack. Incorporate
//all the possible operation on Stack in the program.


#include <iostream>
using namespace std;


template <typename T>
class Stack {
    T *arr;
    int top;
    int capacity;

public:

    Stack(int size = 10) {
        capacity = size;
        arr = new T[capacity];
        top = -1;
    }


    ~Stack() {
        delete[] arr;
    }

    void push(T value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << value << endl;
            return;
        }
        arr[++top] = value;
    }


    T pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return T(); 
        }
        return arr[top--];
    }


    T peek() {
        if (isEmpty()) {
            cout << "Stack is Empty!" << endl;
            return T();
        }
        return arr[top];
    }

    
    bool isEmpty() {
        return top == -1;
    }

    
    bool isFull() {
        return top == capacity - 1;
    }

    
    void display() {
        if (isEmpty()) {
            cout << "Stack is Empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main() {

    Stack<int> intStack(5);
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.display();
    cout << "Top element = " << intStack.peek() << endl;
    cout << "Popped: " << intStack.pop() << endl;
    intStack.display();


    Stack<float> floatStack(3);
    floatStack.push(1.1f);
    floatStack.push(2.2f);
    floatStack.display();
    cout << "Popped: " << floatStack.pop() << endl;
    floatStack.display();


    Stack<char> charStack(4);
    charStack.push('A');
    charStack.push('B');
    charStack.push('C');
    charStack.display();
    cout << "Top element = " << charStack.peek() << endl;

    return 0;
}

/*
Output :

Stack elements: 10 20 30
Top element = 30
Popped: 30
Stack elements: 10 20
Stack elements: 1.1 2.2
Popped: 2.2
Stack elements: 1.1
Stack elements: A B C
Top element = C
*/
