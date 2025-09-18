//6) WAP to define a class Date with properties int month; int day; int year; overload the following operators.
//5.1) + operator [a+b] (a is of date type and b is an integer), use the assumption that all years all years have 360 days and months 30 days.
//5.2) – operator [a-b(same as above)]
//5.3) = operator
//5.4) <,<=,>,>=
//5.5) ++,--[post and pre both]

#include<iostream>
using namespace std;

class Date{
	int day, month, year;
	
public:
	Date(int d=1, int m=1, int y=2000){
		day =d;
		month = m;
		year = y;
	}
	
	int toDays() const{
		return year*360 + month*30 + day;
	}
	
	void fromDays(int total){
		year = total/360;
		total = total %360;
		month = total/30;
		day = total % 30;
		
		if (day == 0){
			day = 30;
			month --;
		}
		if(month == 0){
			month = 12;
			year --;
		}	
	}
	
	Date operator+(int days){
		Date temp;
		int total = this->toDays() + days;
		temp.fromDays(total);
		return temp;
	}

	Date operator-(int days){
		Date temp;
		int total = this->toDays() - days;
		temp.fromDays(total);
		return temp;
		
	}
	
	Date& operator=(const Date &d){
		if(this !=&d){
			day = d.day;
			month = d.month;
			year = d.year;
		
		}
		return *this;
	}
	
	bool operator<(const Date &d){
		return this->toDays() <d.toDays();
	}
	
	bool operator<=(const Date &d){
		return this->toDays() <=d.toDays();
	}
	
	bool operator>(const Date &d){
		return this->toDays() >d.toDays();
	}
	
	bool operator>=(const Date &d){
		return this->toDays() >=d.toDays();
	}
	
	Date& operator++(){
		*this = *this+1;
		return *this;
	}
	
	Date operator++(int) {
        Date temp = *this;
        *this = *this + 1;
        return temp;
    }
	
	Date operator--(){
		*this = *this - 1;
		return *this;
	}
	
	Date operator--(int){
		Date temp = *this;
		*this = *this - 1;
		return temp;
	}
	
	void display() const{
		cout << day << "/" << month << "/" << year << endl;
	}
};

int main(){
	Date d1(25,12,2024);
	cout << "Original date";
	d1.display();
	
	Date d2 = d1 + 10;
	cout <<"After adding 10 days: ";
	d2.display();
	
	Date d3 = d1-40;
	cout << "After subtracting 40 days:";
	d3.display();
	
	Date d4;
	d4=d1;
	cout << "After assignment (d4=d1)";
	d4.display();
	
	if (d2 >d1) cout << "d2 is later than d1" << endl;
	if (d3 < d1) cout<< "d3 is earlier then d1" << endl;
	
	cout << "Pre-increment (++d1):";
	(++d1).display();
	
	cout << "Post-increment(d1++):";
	(d1++).display();
	
	cout<<"Now d1:";
	d1.display();
	
	
	cout<<"Pre-decrement (--d1)";
	(--d1).display();
	
	cout<<"Post-decrement (d1--)";
	(d1--).display();
	
	cout<<"Now d1;";
	d1.display();
	
	return 0;
	
}

//Output :

//Original date25/12/2024
//After adding 10 days: 5/1/2025
//After subtracting 40 days:15/11/2024
//After assignment (d4=d1)25/12/2024
//d2 is later than d1
//d3 is earlier then d1
//Pre-increment (++d1):26/12/2024
//Post-increment(d1++):26/12/2024
//Now d1:27/12/2024
//Pre-decrement (--d1)26/12/2024
//Post-decrement (d1--)26/12/2024
//Now d1;25/12/2024
