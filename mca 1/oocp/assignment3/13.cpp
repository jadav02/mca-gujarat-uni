#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream w("student.txt");

    string name;
    int marks;

    for (int i = 1; i <= 5; i++) {
        cin >> name >> marks;
        w << name << " " << marks << endl;
    }

    w.close();

    ifstream r("student.txt");

    while (r >> name >> marks)
        cout << name << " " << marks << endl;

    r.close();

    return 0;
}

