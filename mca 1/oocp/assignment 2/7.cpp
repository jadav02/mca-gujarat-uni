//7) WAP to define a class Time with properties int hour; int minute; int second; overload the following operators. 
//6.1) + operator [a+b] (a is of time type and b is an integer) 
//6.2) – operator [a-b(same as above)]
// 6.3) = operator 
//6.4) <,<=,>,>= 
//6.5) ++,--[post and pre both]

#include<iostream>
using namespace std;

class Time{
	int hour,minute,second;

public:
	Time(int h=0,int m=0,int s=0){
		hour = h;
		minute = m;
		second = s;
		normalize();
	}	
	
	int toSeconds() const{
		return hour*3600 + minute*60 + second;
	}
	
	void fromSeconds(int total){
		if(total < 0) 
			total = 0;
		hour = total / 3600;
		total %= 3600;
		minute = total /60;
		second = total %60;	
	}
	
	void normalize(){
		int total = toSeconds();
		fromSeconds(total);
	}
	
	Time operator+(int sec){
		Time temp;
		int total = this->toSeconds()+sec;
		temp.fromSeconds(total);
		return temp;
	}
	
	Time operator-(int sec){
		Time temp;
		int total = this->toSeconds() - sec;
		temp.fromSeconds(total);
		return temp;
	}
	
	Time& operator=(const Time &t){
		if(this != &t){
			hour = t.hour;
			minute = t.minute;
			second = t.second;
		}
		return *this;
	}
	
	bool operator<(const Time &t){
		return this->toSeconds() < t.toSeconds();
	}
	
	bool operator<=(const Time &t){
		return this->toSeconds() <= t.toSeconds();
	}
	
	bool operator>(const Time &t){
		return this->toSeconds() >t.toSeconds();
	}
	
	bool operator >=(const Time &t){
		return this->toSeconds()>=t.toSeconds();
	}
	
	Time& operator++(){
		*this = *this+1;
		return *this;
	}
	
	Time operator++(int){
		Time temp = *this;
		*this = *this + 1;
		return temp;
	}
	Time& operator--(){
		*this = *this - 1;
		return *this;
	}
	Time operator--(int){
		Time temp = *this;
		*this = *this - 1;
		return temp;
	}
	
	void display() const{
		cout<< hour << "h : " << minute << "m : "<< second << "s" << endl; 
	}
};

int main(){
	Time t1(1,59,50);
	cout<<"Original Time:";
	t1.display();
	
	Time t2 = t1+20;
	cout<<"After adding 20 seconds: ";
	t2.display();
	
	Time t3 = t1-100;
	cout<<"After subtracting 100 second :";
	t3.display();
	
	Time t4;
	t4 = t1;
	cout << "Ater assignment(t4 = t1)";
	t4.display();
	
	if (t2>t1) 
		cout<<"t2 is later then t1" << endl;
	if(t3<t1)
		cout<<"t3 is earlier then t1" << endl;
	
	cout << "Pre-increment(++t1): ";
	(++t1).display();
	cout << "Post-increment(t1++): ";
	(t1++).display();
	cout <<"Now t1:";
	t1.display();
	
	cout<<"Pre-decrement (--t1): ";
	(--t1).display();
	cout<<"Post-decrement (t1--): ";
	(t1--).display();
	cout<<"Now t1: ";
	t1.display();
	
	return 0;
	
}

//output :

//Original Time:1h : 59m : 50s
//After adding 20 seconds: 2h : 0m : 10s
//After subtracting 100 second :1h : 58m : 10s
//Ater assignment(t4 = t1)1h : 59m : 50s
//t2 is later then t1
//t3 is earlier then t1
//Pre-increment(++t1): 1h : 59m : 51s
//Post-increment(t1++): 1h : 59m : 51s
//Now t1:1h : 59m : 52s
//Pre-decrement (--t1): 1h : 59m : 51s
//Post-decrement (t1--): 1h : 59m : 51s
//Now t1: 1h : 59m : 50s
