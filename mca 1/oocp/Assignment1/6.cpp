#include <iostream>
#include<string>
using namespace std;

class Book {
private:
    int id;
    string title;
	string author;
    float price;

public:
    void input() {
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "\nEnter Author Name: ";
        getline(cin, author);
        cout << "\nEnter Price: ";
        cin >> price;
    }

    // take price
    float getPrice() {
        return price;
    }

    void display() {
        cout << "Book Id:"<<id << "\t"<<"Book Title:" << title << "\t\t"<<"Book Author:" << author << "\t\t"<<"Book Price:" << price << endl;
    }
};

int main() {
    int SIZE;
    cout << "How many books you need to add? :";
    cin >> SIZE;
    Book books[SIZE];

    // input 
    cout << "Enter details of " << SIZE << " books:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "\nBook " << (i + 1) << ":\n";
        books[i].input();
    }

   //sort
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (books[i].getPrice() > books[j].getPrice()) {
                swap(books[i], books[j]);
            }
        }
    }

  //dispaly
    cout << "\nBooks in Ascending Order of Price:\n";
    cout << "ID\tTitle\t\t\tAuthor\t\t\tPrice\n";
    cout << "-----------------------------------------------------------\n";

    for (int i = 0; i < SIZE; i++) {
        books[i].display();
    }

    return 0;
}
