#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Cust {
public:
    int accno;
    string type;
    string name;
    float oldbal;
    float pay;
    string date;

    void read() {
        cin >> accno >> type >> name >> oldbal >> pay >> date;
    }

    void write() {
        cout << accno << " " << type << " " << name << " "
             << oldbal << " " << pay << " " << date << endl;
    }

    void showStatus() {
        float newbal = oldbal - pay;
        cout << "Account: " << accno
             << " Name: " << name
             << " OldBal: " << oldbal
             << " Pay: " << pay
             << " NewBal: " << newbal;

        if (newbal > 0)
            cout << " Status: Pending";
        else
            cout << " Status: Clear";

        cout << endl;
    }
};

int main() {
    int ch;
    Cust c;

    do {
        cout << "1.Add\n2.Display\n3.Status\n4.Exit\n";
        cin >> ch;

        if (ch == 1) {
            ofstream w("cust.txt", ios::app);
            c.read();
            w << c.accno << " " << c.type << " " << c.name << " "
              << c.oldbal << " " << c.pay << " " << c.date << endl;
            w.close();
        }

        else if (ch == 2) {
            ifstream r("cust.txt");
            while (r >> c.accno >> c.type >> c.name 
                      >> c.oldbal >> c.pay >> c.date)
                c.write();
            r.close();
        }

        else if (ch == 3) {
            ifstream r("cust.txt");
            while (r >> c.accno >> c.type >> c.name 
                      >> c.oldbal >> c.pay >> c.date)
                c.showStatus();
            r.close();
        }

    } while (ch != 4);

    return 0;
}

