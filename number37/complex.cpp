#include "complex.h"

Complex::Complex() {
	re = 0;
	im = 0;
}

Complex::~Complex() {

}

Complex Complex::sum(Complex cmp1)
{
	Complex sum;
	sum.im = cmp1.im + this->im;
	sum.re = cmp1.re + this->re;
	return sum;
}

void Complex::print() {
	string sign = (this->re >= 0) ? "+" : "";
	cout << this->re << sign << this->im << "i";
}

Complex Complex::mult(Complex cmp1)
{
	Complex mult;
	mult.re = 0 - cmp1.re * this->re + cmp1.im * this->im;
	mult.im = cmp1.re * this->im + cmp1.im * this->re;
	return mult;
}

Complex Complex::del(Complex cmp1) {
	Complex del;
	del.re = (this->re * cmp1.re + this->im * cmp1.im) / (pow(cmp1.re, 2) + pow(cmp1.im, 2));
	del.im = (cmp1.re * this->im - this->re * cmp1.im) / (pow(cmp1.re, 2) + pow(cmp1.im, 2));
	return del;
}

double Complex::mod() {
	double mod = sqrt(pow(this->re, 2) + pow(this->im, 2));
	return mod;
}