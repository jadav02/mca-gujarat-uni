#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int ch;
    string name, findName;
    string phone, findPhone;

    do {
        cout << "1.Display\n2.Find Phone by Name\n3.Find Name by Phone\n4.Update Phone\n5.Prefix 2\n6.Exit\n";
        cin >> ch;

        if (ch == 1) {
            ifstream f("phone.txt");
            cout << left << setw(15) << "Name" << right << setw(15) << "Phone" << endl;

            while (f >> name >> phone)
                cout << left << setw(15) << name << right << setw(15) << phone << endl;

            f.close();
        }

        else if (ch == 2) {
            cout << "Enter name: ";
            cin >> findName;
            ifstream f("phone.txt");
            while (f >> name >> phone)
                if (name == findName)
                    cout << "Phone: " << phone << endl;
            f.close();
        }

        else if (ch == 3) {
            cout << "Enter phone: ";
            cin >> findPhone;
            ifstream f("phone.txt");
            while (f >> name >> phone)
                if (phone == findPhone)
                    cout << "Name: " << name << endl;
            f.close();
        }

        else if (ch == 4) {
            cout << "Enter name to update: ";
            cin >> findName;
            cout << "Enter new phone: ";
            cin >> findPhone;

            ifstream f("phone.txt");
            ofstream t("temp.txt");

            while (f >> name >> phone) {
                if (name == findName)
                    t << name << " " << findPhone << endl;
                else
                    t << name << " " << phone << endl;
            }

            f.close();
            t.close();

            remove("phone.txt");
            rename("temp.txt", "phone.txt");

            cout << "Updated.\n";
        }

        else if (ch == 5) {
            ifstream f("phone.txt");
            ofstream t("temp.txt");

            while (f >> name >> phone)
                t << name << " 2" << phone << endl;

            f.close();
            t.close();
            remove("phone.txt");
            rename("temp.txt", "phone.txt");

            cout << "Prefixed.\n";
        }

    } while (ch != 6);

    return 0;
}

