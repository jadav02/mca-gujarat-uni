#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Marksheet {
public:
    string name;
    string s1, s2, s3;
    int m1[5], m2[5], m3[5];

    void input() {
        cin >> name;
        cin >> s1 >> s2 >> s3;

        for (int i = 0; i < 5; i++) cin >> m1[i];
        for (int i = 0; i < 5; i++) cin >> m2[i];
        for (int i = 0; i < 5; i++) cin >> m3[i];
    }

    void printMarksheet() {
        cout << "********** MARKSHEET **********" << endl;
        cout << "Name: " << name << endl;

        cout << setw(12) << s1 
             << setw(12) << s2 
             << setw(12) << s3 << endl;

        for (int i = 0; i < 5; i++) {
            cout << setw(12) << m1[i]
                 << setw(12) << m2[i]
                 << setw(12) << m3[i] << endl;
        }

        cout << "********************************" << endl;
    }
};

int main() {
    Marksheet m;
    m.input();
    m.printMarksheet();
    return 0;
}

