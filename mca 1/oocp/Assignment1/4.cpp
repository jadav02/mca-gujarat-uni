#include<iostream>
using namespace std;

class Date{
	private:
		int day ,month ,year;
		 
 
		int days(int m, int y) {
        	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
            	return 31;
        	else if (m == 4 || m == 6 || m == 9 || m == 11)
            	return 30;
       		else if (m == 2) { // February
            	if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
                	return 29; // leap year
            else
                return 28;
        }
        return 30;
    }
    public:
    void input() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    void addDays(int extra) {
        day += extra;

        // Adjust day, month, year
        while (true) {
            int maxDays = days(month, year);
            if (day > maxDays) {
                day -= maxDays;
                month++;
                if (month > 12) {
                    month = 1;
                    year++;
                }
            } 
			else {
                break;
            }
        }
    }


    void display() {
        cout << "New Date = " << day << "/" << month << "/" << year << endl;
    }
};

// Main function
int main() {
    Date d;
    int extra;

    d.input();  
    cout << "Enter extra days to add: ";
    cin >> extra;

    d.addDays(extra);  // add days
    d.display();   // display new date

    return 0;
}

