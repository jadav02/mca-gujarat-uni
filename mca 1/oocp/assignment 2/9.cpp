//9) WAP to Overload the New and Delete for Stack Class.
#include <iostream>
#include <cstdlib>   
using namespace std;

class Stack {
    int *arr;
    int top;
    int size;

public:

    Stack(int s = 5) {
        size = s;
        arr = new int[size];
        top = -1;
    }


    ~Stack() {
        delete[] arr;
    }

  
    void push(int x) {
        if (top == size - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = x;
    }

    
    int pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        return arr[top--];
    }


    void display() {
        if (top == -1) {
            cout << "Stack Empty!" << endl;
            return;
        }
        cout << "Stack: ";
        for (int i = 0; i <= top; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

 
    void* operator new(size_t sz) {
        cout << "[Custom new called] Allocating " << sz << " bytes" << endl;
        void* p = malloc(sz);
        if (!p) throw bad_alloc();
        return p;
    }

   
    void operator delete(void* p) {
        cout << "[Custom delete called] Freeing memory" << endl;
        free(p);
    }
};


int main() {
    
    Stack* s = new Stack(5);

    s->push(10);
    s->push(20);
    s->push(30);
    s->display();

    cout << "Popped: " << s->pop() << endl;
    s->display();

    
    delete s;

    return 0;
}

/*
output:

[Custom new called] Allocating 16 bytes
Stack: 10 20 30
Popped: 30
Stack: 10 20
[Custom delete called] Freeing memory	
*/
