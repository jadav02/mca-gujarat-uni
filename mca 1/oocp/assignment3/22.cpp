#include <iostream>
#include <vector>
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

    void show() {
        cout << name << " " << roll << endl;
    }
};

int main() {
    vector<Student> v;
    string n;
    int r;
    int count;

    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> n >> r;
        v.push_back(Student(n, r));
    }

    for (int i = 0; i < v.size(); i++)
        v[i].show();

    return 0;
}

