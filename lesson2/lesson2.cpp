#include "Fraction.h"
#include <iostream>
using namespace std;
int main()
{
	Fraction* f=new Fraction(5,20);
	f->Wright();
	f->reduction();
	f->Wright();
	Fraction* f2 = new Fraction(1, 2);
	Fraction* f3 = f->connection(f2);
	f3->Wright();
	
}

