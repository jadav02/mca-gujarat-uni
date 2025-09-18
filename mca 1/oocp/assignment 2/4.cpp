//4) WAP to define an object m1 of matrix class, use m1<<cout.

#include<iostream>
using namespace std;

class Matrix{
	int mat[2][2];
	
public:
	Matrix(int a, int b, int c, int d){
		mat[0][0] = a;
		mat[0][1] = b;
		mat[1][0] = c;
		mat[1][1] = d;		
	}
	
	void operator << (ostream &out){
		out << "Matrix:" << endl;
		for(int i = 0 ; i < 2; i++){
			for(int j=0;j<2;j++){
				cout<<mat[i][j] << " ";
			}
			cout << endl;
		}
	}
};

int main(){
	Matrix m1(1,2,3,4);
	
	m1 << cout;
	
	return 0;
}

//output
//Matrix:
//1 2
//3 4
