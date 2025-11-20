#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Employee : public Person {
public:
    int empId;
    string job;

    Employee(string n, int a, int id, string j)
        : Person(n, a)
    {
        empId = id;
        job = j;
    }
};

class Department : public Employee {
public:
    string deptName;

    Department(string n, int a, int id, string j, string d)
        : Employee(n, a, id, j)
    {
        deptName = d;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Job: " << job << endl;
        cout << "Department: " << deptName << endl;
        cout << endl;
    }
};

int main() {
    Department d1("Vivek", 25, 101, "Developer", "IT");
    Department d2("Amit", 30, 102, "Manager", "HR");

    d1.show();
    d2.show();

    return 0;
}

