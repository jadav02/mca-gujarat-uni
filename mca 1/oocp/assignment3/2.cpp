#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int roll;
    string name;
    string stream;

    Student(int r, string n, string s) {
        roll = r;
        name = n;
        stream = s;
    }
};

class Marks : public Student {
public:
    int m1, m2, m3, m4, m5;

    Marks(int r, string n, string s, int a, int b, int c, int d, int e)
        : Student(r, n, s) {
        m1 = a;
        m2 = b;
        m3 = c;
        m4 = d;
        m5 = e;
    }
};

class Result : public Marks {
public:
    int total;
    float per;
    string res;

    Result(int r, string n, string s, int a, int b, int c, int d, int e)
        : Marks(r, n, s, a, b, c, d, e) 
    {
        total = m1 + m2 + m3 + m4 + m5;
        per = total / 5.0;

        if (m1 >= 35 && m2 >= 35 && m3 >= 35 && m4 >= 35 && m5 >= 35)
            res = "Pass";
        else
            res = "Fail";
    }

    void show() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Stream: " << stream << endl;
        cout << "Marks: " << m1 << " " << m2 << " " << m3 << " " << m4 << " " << m5 << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << per << endl;
        cout << "Result: " << res << endl;
        cout << endl;
    }
};

int main() {
    Result s1(1, "Vivek", "Computer", 80, 75, 70, 85, 90);
    Result s2(2, "Amit", "Electrical", 55, 40, 28, 60, 70);

    s1.show();
    s2.show();

    return 0;
}

