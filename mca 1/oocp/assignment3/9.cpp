#include <iostream>
using namespace std;

class Shape {
public:
    double x, y;

    void get_data(double a, double b = 0) {
        x = a;
        y = b;
    }

    virtual void display_area() {}
};

class Triangle : public Shape {
public:
    void display_area() {
        cout << "Triangle Area: " << (0.5 * x * y) << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() {
        cout << "Rectangle Area: " << (x * y) << endl;
    }
};

class Circle : public Shape {
public:
    void display_area() {
        cout << "Circle Area: " << (3.14 * x * x) << endl;
    }
};

int main() {
    Shape* arr[5];
    int n, ch;
    double a, b;

    cout << "How many shapes? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "1.Triangle  2.Rectangle  3.Circle: ";
        cin >> ch;

        if (ch == 1) {
            Triangle* t = new Triangle();
            cout << "Enter base and height: ";
            cin >> a >> b;
            t->get_data(a, b);
            arr[i] = t;
        }
        else if (ch == 2) {
            Rectangle* r = new Rectangle();
            cout << "Enter length and width: ";
            cin >> a >> b;
            r->get_data(a, b);
            arr[i] = r;
        }
        else {
            Circle* c = new Circle();
            cout << "Enter radius: ";
            cin >> a;
            c->get_data(a);
            arr[i] = c;
        }
    }

    cout << endl << "Areas:" << endl;
    for (int i = 0; i < n; i++) {
        arr[i]->display_area();
    }

    return 0;
}

