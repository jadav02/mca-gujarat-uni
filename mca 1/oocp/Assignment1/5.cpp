#include<iostream>
using namespace std;

class Employee{
private:
	int id;
	string name;
	float basic ,gross,hra,da,oa;

public:
    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basic;
	}
	
	void calculate(){
        hra = 0.20 * basic;
        da  = 0.30 * basic;
        oa  = 0.10 * basic;
        gross = basic + hra + da + oa;		
	}
	
	void display() {
        cout << "\nEmployee ID   : " << id;
        cout << "\nEmployee Name : " << name;
        cout << "\nBasic Salary  : " << basic;
        cout << "\nHRA : " << hra;
        cout << "\nDA : " << da;
        cout << "\nOA  : " << oa;
        cout << "\nGross Salary  : " << gross << endl;
    }
};

int main() {
    Employee e;

    e.input();          // take employee details
    e.calculate(); // calculate gross salary
    e.display();        // show details

    return 0;
}
