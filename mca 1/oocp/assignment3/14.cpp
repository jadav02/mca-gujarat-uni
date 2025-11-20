#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

class Result {
public:
    int roll;
    string name;
    int marks;

    void show() {
        cout << setw(10) << roll
             << setw(15) << name
             << setw(10) << marks << endl;
    }
};

int main() {
    ifstream f("merit.txt");
    Result r;
    int count = 0;

    cout << setw(10) << "ROLL"
         << setw(15) << "NAME"
         << setw(10) << "MARKS" << endl;

    while (f >> r.roll >> r.name >> r.marks) {
        r.show();
        count++;

        if (count % 10 == 0) {
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();

            cout << setw(10) << "ROLL"
                 << setw(15) << "NAME"
                 << setw(10) << "MARKS" << endl;
        }
    }

    f.close();
    return 0;
}

