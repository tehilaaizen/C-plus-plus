#include "Fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction() {
	numerator = 0;
	denominator = 1;
}
Fraction::Fraction(int numerator,int denominator) {
	this->numerator = numerator;
	this->denominator = denominator;
}
void Fraction::Wright() {
	cout << numerator << "/" << denominator << endl;
}
int Fraction::getNumerator() {
	return numerator;
}
int Fraction::getDenominator() {
	return denominator;
}
void Fraction::setNumerator(int numerator) {
	this->numerator = numerator;
}
void Fraction::setDenominator(int denominator) {
	this->denominator = denominator;
}
int gcd(int a, int b) {
	int i = (a > b) * b + (b > a) * a;
	for ( ; i > 0; i--) {
		if (a % i == 0 && b % i == 0)
			return i;
	}
	return 1;
}
void Fraction::reduction() {
	int big = gcd(numerator, denominator);
	this->numerator /= big;
	this->denominator /= big;
}
Fraction* Fraction::connection(Fraction* f)
{
	Fraction* newf=new Fraction();
	newf->denominator = f->denominator * this->denominator;
	newf->numerator = f->denominator * this->numerator + f->numerator * this->denominator;
	newf->reduction();
	return newf;
}



