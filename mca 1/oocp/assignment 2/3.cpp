//3) WAP to Overload the *, +,-, ==, ! = and = operators for the complex class.
#include<iostream>
using namespace std;

class Complex{
	float real,image;
	
public:
	Complex(){
		real = 0;
		image = 0;

	}
	Complex(float r, float i){
		real = r;
		image = i;
	}
	
	Complex operator+(Complex c){
		return Complex(real + c.real, image + c.image);
	}
	
	Complex operator-(Complex c){
		return Complex(real - c.real , image - c.image);
	}
	
	Complex operator*(Complex c){
		return Complex((real *c.real - image * c.image),(real * c.image + image * c.real));
	}
	
	Complex& operator=(const Complex &c){
		if (this!= &c){
			real = c.real;
			image = c.image;
			}
		return *this;
	}
	
	bool operator==(Complex c){
		return(real == c.real && image==c.image);
	}
	
	bool operator!=(Complex c){
		return!(*this == c);
	}
	
	void display(){
		if(image >= 0)
			cout << real << " + " << image << "i" << endl;
		else
			cout << real << " - " << -image << "i" << endl;
		
	}
};

int main(){
	Complex c1(3,2), c2(1,7),result;
	
	cout << "c1 = ";
	c1.display();
	cout << "c2 = ";
	c2.display();
	
	result = c1+c2;
	cout << "c1 +c2 = ";
	result.display();
	
	
	result = c1-c2;
	cout << "c1 - c2";
	result.display();
	
	
	result = c1*c2;
	cout << "c1 * c2";
	result.display();
	
	Complex c3;
	c3=c1;
	cout << "After assignment c3=";
	c3.display();
	
	if(c1 == c3)
		cout<< "c1 and c3 are equal" << endl;
	else
		cout<< "c1 and c3 are not equal"<< endl;
		
	if(c1 != c3)
		cout<< "c1 and c3 are not equal"<< endl;
	else
		cout<<	"c1 and c3 are equal" << endl;
		
	return 0;
	
}

//output

//c1 = 3 + 2i
//c2 = 1 + 7i
//c1 +c2 = 4 + 9i
//c1 - c22 - 5i
//c1 * c2-11 + 23i
//After assignment c3=3 + 2i
//c1 and c3 are equal
//c1 and c3 are equal
