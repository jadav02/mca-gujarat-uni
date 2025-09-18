//1) WAP to use binary operator + add two object of class Numbers having num1 and num2 as its data members and display result.

#include<iostream>
using namespace std;

class Numbers{
	int num1, num2;
	
public:
	Numbers(){
		num1 = 0;
		num2 = 0;
	}
	
	Numbers(int a, int b){
		num1 = a;
		num2 = b;
	}
	
	Numbers operator+(Numbers obj){
		Numbers temp;
		temp.num1 = num1 + obj.num1;
		temp.num2 = num2 + obj.num2;
		return temp;
		
	}
	
	void display(){
		cout<< "num = " << num1 << ", num2 = " << num2 << endl;
	}
	
};

int main(){
	Numbers n1(5,10) , n2(3,7), result;
	
	cout << "First object: ";
	n1.display();
	
	cout<< "Second object: ";
	n2.display();
	
	result = n1 + n2;
	
	cout << "Result after addition: ";
	result.display();
	
	return 0 ;
	
}

//output:

//First object: num = 5, num2 = 10
//Second object: num = 3, num2 = 7
//Result after addition: num = 8, num2 = 17


