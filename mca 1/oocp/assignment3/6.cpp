#include <iostream>
#include <vector>
using namespace std;

class Figure {
public:
    string type;
    Figure(string t) {
        type = t;
    }
    virtual void show() {
        cout << type << endl;
    }
};

class Triangle : public Figure {
public:
    Triangle() : Figure("Triangle") {}
};

class Square : public Figure {
public:
    Square() : Figure("Square") {}
};

class Circle : public Figure {
public:
    Circle() : Figure("Circle") {}
};

class RectangleF : public Figure {
public:
    RectangleF() : Figure("Rectangle") {}
};

class Frame {
public:
    vector<Figure*> arr;

    void add(Figure* f) {
        arr.push_back(f);
    }

    void removeLast() {
        if (!arr.empty())
            arr.pop_back();
    }

    void showAll() {
        for (auto x : arr)
            x->show();
    }
};

int main() {
    Frame f;

    f.add(new Triangle());
    f.add(new Square());
    f.add(new Circle());
    f.add(new RectangleF());

    f.showAll();

    f.removeLast();

    cout << "After removing one:" << endl;
    f.showAll();

    return 0;
}

