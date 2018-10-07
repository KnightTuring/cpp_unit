#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
	private:
		int real;
		int imag;
	public:
		Complex();
		Complex(int,int);
		Complex add(Complex, Complex);
		int getReal();
		int getImag();

};
#endif
