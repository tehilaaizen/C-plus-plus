#pragma once
#include <iostream>
using namespace std;
class Fraction
{
	int numerator=0, denominator=1;
	
public:
	Fraction();
	Fraction(int,int);
	void Wright();
	int getNumerator();
	int getDenominator();
	void setNumerator(int);
	void setDenominator(int);
	void reduction();
	Fraction* connection(Fraction*);	
};

