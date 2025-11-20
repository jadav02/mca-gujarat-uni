#include <iostream>
#include <iomanip>
using namespace std;

ostream& fmt(ostream& o) {
    o << setfill('+') << setw(5) << fixed << setprecision(2);
    return o;
}

int main() {
    float x, y, z;
    cin >> x >> y >> z;

    cout << fmt << x << endl;
    cout << fmt << y << endl;
    cout << fmt << z << endl;

    return 0;
}

