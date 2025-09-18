//5) WAP to define a matrix class and overload the * operator to multiply a number with matrix (Example: 5*Matrix should be possible).

#include<iostream>
using namespace std;

class Matrix{
	int mat[2][2];
	
public:
	Matrix(int a=0, int b=0, int c=0, int d=0){
		mat[0][0] = a;
		mat[0][1] = b;
		mat[1][0] = c;
		mat[1][1] = d;
	}
	
	friend Matrix operator*(int num,Matrix m);
	
	void display(){
		cout << "Matrix : " << endl;
		for(int i =0 ; i<2 ; i++){
			for(int j =0; j<2 ; j++){
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
	}
};

Matrix operator*(int num, Matrix m){
	Matrix temp;
	for(int i=0 ; i<2 ; i++){
		for(int j=0 ; j<2 ; j++){
			temp.mat[i][j] = num*m.mat[i][j];
		}
	}
	return temp;
}

int main(){
	Matrix m1(1,2,3,4);
	
	cout<< "Original matrix:" << endl;
	m1.display();
	
	Matrix m2 = 5* m1;
	
	cout << "After multiplying by 5: " << endl;
	m2.display();
	
	return 0;
}

//output : 

//Original matrix:
//Matrix :
//1 2
//3 4
//After multiplying by 5:
//Matrix :
//5 10
//15 20
