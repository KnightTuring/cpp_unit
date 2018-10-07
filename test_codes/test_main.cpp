#include"Complex.h"
#include<iostream>
using namespace std;

int main()
{
	
	Complex c1(1,2); Complex c2(1,2);
	Complex c3 = c1.add(c1, c2);
	cout<<"Real is "<<c3.getReal()<<endl;
	cout<<"Imaginary is "<<c3.getImag()<<endl;
	
	return 0;
}
