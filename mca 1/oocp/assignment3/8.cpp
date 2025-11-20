#include <iostream>
#include <string>
using namespace std;

class Faculty {
public:
    string name;
    string qual;
    string sub;

    Faculty(string n, string q, string s) {
        name = n;
        qual = q;
        sub = s;
    }

    virtual void show() {
        cout << name << " " << qual << " " << sub << endl;
    }
};

class Regular : public Faculty {
public:
    Regular(string n, string q, string s)
        : Faculty(n, q, s) {}

    void show() {
        cout << "Regular Faculty: "
             << name << " Qual:" << qual 
             << " Subjects:" << sub
             << endl;
    }
};

class Visiting : public Faculty {
public:
    int days;
    string time;

    Visiting(string n, string q, string s, int d, string t)
        : Faculty(n, q, s) 
    {
        days = d;
        time = t;
    }

    void show() {
        cout << "Visiting Faculty: "
             << name << " Qual:" << qual
             << " Subject:" << sub
             << " Days:" << days
             << " Time:" << time
             << endl;
    }
};

int main() {
    Faculty* p;

    Regular r1("Vivek", "MCA", "DS,CPP,Java");
    Visiting v1("Amit", "PhD", "AI", 3, "2pm-5pm");

    p = &r1;
    p->show();

    p = &v1;
    p->show();

    return 0;
}

