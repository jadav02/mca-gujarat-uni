#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll;

    Student(string n, int r) {
        name = n;
        roll = r;
    }

    virtual void display() {}
};

class Test : public Student {
public:
    int tmark;

    Test(string n, int r, int m) : Student(n, r) {
        tmark = m;
    }

    void display() {
        cout << "Test Student: " << name 
             << " Roll:" << roll 
             << " TestMark:" << tmark << endl;
    }
};

class Sports : public Student {
public:
    int smark;

    Sports(string n, int r, int m) : Student(n, r) {
        smark = m;
    }

    void display() {
        cout << "Sports Student: " << name 
             << " Roll:" << roll 
             << " SportsMark:" << smark << endl;
    }
};

int main() {
    Student* p;

    Test t1("Vivek", 1, 80);
    Sports s1("Amit", 2, 70);

    p = &t1;
    p->display();

    p = &s1;
    p->display();

    return 0;
}

