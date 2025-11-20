#include <iostream>
#include <string>
using namespace std;

class Publication {
public:
    string title;
    float price;

    Publication(string t, float p) {
        title = t;
        price = p;
    }

    virtual void show() {}
};

class Book : public Publication {
public:
    int pages;

    Book(string t, float p, int pg)
        : Publication(t, p) {
        pages = pg;
    }

    void show() {
        cout << "Book: " << title
             << " Price:" << price
             << " Pages:" << pages << endl;
    }
};

class Tape : public Publication {
public:
    float time;

    Tape(string t, float p, float tm)
        : Publication(t, p) {
        time = tm;
    }

    void show() {
        cout << "Tape: " << title
             << " Price:" << price
             << " Time:" << time << endl;
    }
};

int main() {
    Publication* arr[10];
    int n, ch;
    string t;
    float p;
    int pg;
    float tm;

    int countBook = 0, countTape = 0;

    cout << "How many entries? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "1.Book  2.Tape: ";
        cin >> ch;

        cout << "Title: ";
        cin >> t;

        cout << "Price: ";
        cin >> p;

        if (ch == 1) {
            cout << "Pages: ";
            cin >> pg;
            arr[i] = new Book(t, p, pg);
        } 
        else {
            cout << "Time: ";
            cin >> tm;
            arr[i] = new Tape(t, p, tm);
        }
    }

    cout << endl << "Data Entered:" << endl;
    for (int i = 0; i < n; i++) {
        arr[i]->show();

        if (dynamic_cast<Book*>(arr[i]))
            countBook++;

        if (dynamic_cast<Tape*>(arr[i]))
            countTape++;
    }

    cout << endl;
    cout << "Total Books: " << countBook << endl;
    cout << "Total Tapes: " << countTape << endl;

    return 0;
}

