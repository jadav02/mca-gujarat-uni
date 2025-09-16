#include<iostream>
using namespace std;

class Time{
	private:
		int h,m;
	
	public:
		//user input
		void getData(){
			cout << "Enter hours: ";
        	cin >> h;
        	cout << "Enter minutes: ";
        	cin >> m;
		}
		
		//add minute
		void add(int extra) {
        	m += extra;        // add minutes
        	h += m / 60;       // change minutes to hours
        	m = m % 60;        // make minute less then 60
    	}
    	
		
		void display() {
    	    cout << "New Time = " << h << " hours " << m << " minutes" << endl;
    	}
	
};

int main() {
    Time t;
    int extra;

    t.getData();  

    cout << "Enter extra minutes to add: ";
    cin >> extra;

    t.add(extra);     // add  minutes
    t.display();      // show after add minute time

    return 0;
}
