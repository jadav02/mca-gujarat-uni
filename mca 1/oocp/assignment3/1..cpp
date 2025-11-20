#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int id;
    string name;

    Book(int x, string y) {
        id = x;
        name = y;
    }
    ~Book() {
    }
    void show() {
        cout << id << " " << name;
    }
};

class Sales : public Book {
public:
    static int cs;
    Sales(int x, string y) : Book(x, y) {
        cs++;
    }
    ~Sales() {}
    void print() {
        cout << "Sales: ";
        show();
        cout << endl;
    }
};
int Sales::cs = 0;

class Academics : public Book {
public:
    static int ca;
    Academics(int x, string y) : Book(x, y) {
        ca++;
    }
    ~Academics() {}
    void print() {
        cout << "Academic: ";
        show();
        cout << endl;
    }
};
int Academics::ca = 0;

class Thrillers : public Book {
public:
    static int ct;
    Thrillers(int x, string y) : Book(x, y) {
        ct++;
    }
    ~Thrillers() {}
    void print() {
        cout << "Thriller: ";
        show();
        cout << endl;
    }
};
int Thrillers::ct = 0;

int main() {
    Sales s1(1, "SalesBookA");
    Sales s2(2, "SalesBookB");

    Academics a1(3, "Maths");
    Academics a2(4, "Science");

    Thrillers t1(5, "GhostStory");
    Thrillers t2(6, "DarkNight");

    s1.print();
    s2.print();
    a1.print();
    a2.print();
    t1.print();
    t2.print();

    cout << "Total Sales: " << Sales::cs << endl;
    cout << "Total Academic: " << Academics::ca << endl;
    cout << "Total Thriller: " << Thrillers::ct << endl;

    return 0;
}

