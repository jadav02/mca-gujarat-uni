/*Write a program to create class Num (int n1, int n2, int n3, int n4). Display
total and average of n1, n2, n3 and n4.*/

#include<iostream>
using namespace std;

class Num{
	private:
		int n1,n2,n3,n4,total;
		float average;
		
	public:
		void input(){
			cout<<"Enter n1:";
			cin>>n1;
			cout<<"Enter n2:";
			cin>>n2;
			cout<<"Enter n3:";
			cin>>n3;
			cout<<"Enter n4:";
			cin>>n4;	
		}
		void calculate(){
			total = n1+n2+n3+n4;
			average = total/4;	
		}
		void display(){
			cout<<"\n"<<" n1 is:"<<n1<<"\n"<<" n2 is:"<<n2<<"\n"<<" n3 is:"<<n3<<"\n"<<" n4 is:"<<n4<<endl;
			cout<< "total:"<<total;
			cout<<"average:"<<average;
			
		}
};

int main(){
	
	Num n;
	n.input();
	n.calculate();
	n.display();
	return 0;
}
