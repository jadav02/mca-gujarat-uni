//2) WAP to overload operator * which multiply a number to each element of an array within a class arrayContainer and display the result.
#include<iostream>
using namespace std;

class arrayContainer{
	int arr[5];
	
public:
	arrayContainer(int a,int b, int c,int d,int e){
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
		arr[3] = d;
		arr[4] = e;		
	}
	
	arrayContainer operator*(int num){
		arrayContainer temp(0,0,0,0,0);
		for(int i=0; i<5; i++){
			temp.arr[i] = arr[i]*num;
		}
		return temp;
	}
	void dispaly(){
		cout << "Array elements: ";
		for(int i=0; i<5; i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

int main(){
	arrayContainer A(1,2,3,4,5);
	
	cout << "Original array:";
	A.dispaly();
	
	arrayContainer B=A*3;
	
	cout << "After multiplying by 3:";
	B.dispaly();
	
	return 0;
}


//output:

//Original array:Array elements: 1 2 3 4 5
//After multiplying by 3:Array elements: 3 6 9 12 15
