#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int ch;

    do {
        cout << "1.Write\n2.Read\n3.Count Words/Lines\n4.Copy File\n5.Exit\n";
        cin >> ch;

        if (ch == 1) {
            string text;
            ofstream f("file1.txt");
            cout << "Enter text (type END to stop):\n";

            while (true) {
                cin >> text;
                if (text == "END") break;
                f << text << " ";
            }
            f.close();
        }

        else if (ch == 2) {
            string s;
            ifstream f("file1.txt");

            while (f >> s)
                cout << s << " ";
            cout << endl;

            f.close();
        }

        else if (ch == 3) {
            ifstream f("file1.txt");
            string s;
            int words = 0, lines = 0;

            string line;
            while (getline(f, line)) {
                lines++;
                for (int i = 0; i < line.size(); i++)
                    if (line[i] == ' ')
                        words++;
                words++;
            }

            cout << "Words: " << words << endl;
            cout << "Lines: " << lines << endl;

            f.close();
        }

        else if (ch == 4) {
            ifstream f1("file1.txt");
            ofstream f2("file2.txt");

            string s;
            while (getline(f1, s))
                f2 << s << endl;

            f1.close();
            f2.close();

            cout << "Copied to file2.txt\n";
        }

    } while (ch != 5);

    return 0;
}

