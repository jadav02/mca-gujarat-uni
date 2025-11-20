#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    string addr;
    string phone;

    void input() {
        cin >> name >> addr >> phone;
    }

    void show() {
        cout << name << " " << addr << " " << phone << endl;
    }
};

int main() {
    int ch;
    Employee e;
    string findName;

    do {
        cout << "1.Add\n2.Modify\n3.Search\n4.List All\n5.Exit\n";
        cin >> ch;

        if (ch == 1) {
            ofstream f("emp.dat", ios::app);
            e.input();
            f << e.name << " " << e.addr << " " << e.phone << endl;
            f.close();
        }

        else if (ch == 2) {
            cout << "Enter name to modify: ";
            cin >> findName;

            ifstream f("emp.dat");
            ofstream t("temp.dat");

            while (f >> e.name >> e.addr >> e.phone) {
                if (e.name == findName) {
                    cout << "Enter new data: ";
                    e.input();
                }
                t << e.name << " " << e.addr << " " << e.phone << endl;
            }

            f.close();
            t.close();
            remove("emp.dat");
            rename("temp.dat", "emp.dat");
        }

        else if (ch == 3) {
            cout << "Enter name: ";
            cin >> findName;

            ifstream f("emp.dat");
            while (f >> e.name >> e.addr >> e.phone)
                if (e.name == findName)
                    e.show();
            f.close();
        }

        else if (ch == 4) {
            ifstream f("emp.dat");
            while (f >> e.name >> e.addr >> e.phone)
                e.show();
            f.close();
        }

    } while (ch != 5);

    return 0;
}

