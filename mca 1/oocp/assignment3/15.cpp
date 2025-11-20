#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ifstream f("student.txt");
    vector<string> data;
    string line;

    while (getline(f, line))
        data.push_back(line);

    f.close();

    for (int i = data.size() - 1; i >= 0; i--)
        cout << data[i] << endl;

    return 0;
}

