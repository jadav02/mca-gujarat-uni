#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    Person(string n) {
        name = n;
    }
};

class Staff : public Person {
public:
    int code;
    Staff(string n, int c) : Person(n) {
        code = c;
    }
};

class Teacher : public Staff {
public:
    string subject;
    string publish;
    Teacher(string n, int c, string s, string p)
        : Staff(n, c) {
        subject = s;
        publish = p;
    }
    void show() {
        cout << "Teacher: " << name << " Code:" << code 
             << " Subject:" << subject << " Pub:" << publish << endl;
    }
};

class Officer : public Staff {
public:
    string grade;
    Officer(string n, int c, string g)
        : Staff(n, c) {
        grade = g;
    }
    void show() {
        cout << "Officer: " << name << " Code:" << code 
             << " Grade:" << grade << endl;
    }
};

class Typist : public Staff {
public:
    int speed;
    Typist(string n, int c, int s)
        : Staff(n, c) {
        speed = s;
    }
};

class Regular : public Typist {
public:
    Regular(string n, int c, int s)
        : Typist(n, c, s) {
    }
    void show() {
        cout << "Regular Typist: " << name << " Code:" << code 
             << " Speed:" << speed << endl;
    }
};

class Casual : public Typist {
public:
    int wage;
    Casual(string n, int c, int s, int w)
        : Typist(n, c, s) {
        wage = w;
    }
    void show() {
        cout << "Casual Typist: " << name << " Code:" << code 
             << " Speed:" << speed << " Wage:" << wage << endl;
    }
};

int main() {
    Teacher t1("Vivek", 101, "Maths", "ABC");
    Officer o1("Amit", 102, "A");
    Regular r1("Ravi", 103, 60);
    Casual c1("Karan", 104, 50, 300);

    t1.show();
    o1.show();
    r1.show();
    c1.show();

    return 0;
}

