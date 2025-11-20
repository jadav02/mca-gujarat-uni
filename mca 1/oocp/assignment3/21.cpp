#include <iostream>
using namespace std;

namespace myspace {
    int total_marks(int a, int b, int c) {
        return a + b + c;
    }
}

class Marks {
public:
    int m1, m2, m3;

    void input() {
        cin >> m1 >> m2 >> m3;
    }

    void showTotal() {
        cout << "Total: " << myspace::total_marks(m1, m2, m3) << endl;
    }
};

int main() {
    Marks s;
    s.input();
    s.showTotal();
    return 0;
}

