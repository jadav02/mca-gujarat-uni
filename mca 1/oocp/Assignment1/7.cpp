#include<iostream>
using namespace std;

class Counter{
	private:
		int value;
		static int count;
	
	public:
		void read(){
        	cout << "Enter a number: ";
        	cin >> value;
        	count++;// increase static value			
		}
		
		void display() {
        cout << "You entered: " << value << endl;
    	}
    	
    	static void Count() {   // static function can access static members only
        cout << "Total inputs taken: " << count << endl;
    	}
};

int Counter::count = 0;

int main() {
    int n;
    cout << "How many numbers you want to input? ";
    cin >> n;

    Counter obj[100];  // create array of objects

    for (int i = 0; i < n; i++) {
        obj[i].read();
       
    }

    // show how many inputs taken
    Counter::Count();

    return 0;
}
