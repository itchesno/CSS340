#include <iostream>
#include "classes.h"

void classes_test() {
	Fraction f1(1, 2);
	Fraction f2(2, 3);

	std::cout << f1 << " + " << f2 << " = " << f1 + f2 << std::endl;
	std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl;
}


Fraction Fraction::operator+(const Fraction& f2) {
	int n1 = numerator;
	int d1 = denominator;
	int n2 = f2.getNumerator();
	int d2 = f2.getDenominator();

	return Fraction(n1 * d2 + n2 * d1, d1 * d2);
}

//Fraction operator+(const Fraction& f1, const Fraction& f2) {
//	int n1 = f1.getNumerator();
//	int d1 = f1.getDenominator();
//	int n2 = f2.getNumerator();
//	int d2 = f2.getDenominator();
//
//	return Fraction(n1 * d2 + n2 * d1, d1 * d2);
//}

Fraction operator*(const Fraction& f1, const Fraction& f2) {
	return Fraction(
		f1.getNumerator() * f2.getNumerator(),
		f1.getDenominator() * f2.getDenominator());
}

std::ostream& operator<<(std::ostream& os, const Fraction& f) {
	os << f.getNumerator() << "/" << f.getDenominator();
	return os;
}