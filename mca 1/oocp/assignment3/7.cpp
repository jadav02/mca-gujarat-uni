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
};

class MCAStudent : public Student {
public:
    MCAStudent(string n, int r) : Student(n, r) {}
};

class NonMCAStudent : public Student {
public:
    NonMCAStudent(string n, int r) : Student(n, r) {}
};

class Local {
public:
    string area;
    Local(string a) {
        area = a;
    }
};

class NonLocal {
public:
    string city;
    NonLocal(string c) {
        city = c;
    }
};

class LocalMCAStudent : public Local, public MCAStudent {
public:
    LocalMCAStudent(string n, int r, string a)
        : MCAStudent(n, r), Local(a) {}

    void show() {
        cout << "Name: " << name 
             << " Roll:" << roll 
             << " Area:" << area << endl;
    }
};

int main() {
    LocalMCAStudent s1("Vivek", 1, "Ahmedabad");
    LocalMCAStudent s2("Amit", 2, "Surat");
    LocalMCAStudent s3("Karan", 3, "Rajkot");
    LocalMCAStudent s4("Milan", 4, "Vadodara");
    LocalMCAStudent s5("Sagar", 5, "Bhavnagar");

    s1.show();
    s2.show();
    s3.show();
    s4.show();
    s5.show();

    return 0;
}

