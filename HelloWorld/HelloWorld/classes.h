#pragma once

// Example of class. You typically don't have implementation here. But sometimes, it's ok, when short, especially constructors.

class Fraction {
public:
	//Fraction(int numerator, int denominator) {
	//	this->numerator = numerator;
	//	this->denominator = denominator;
	//}

	// this is short of the above, how you can init members
	Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) { /* you still can put something here*/ }

	// this is destructor - called when object is destroyed and you need to free memory you EXPLICITLY allocated
	// this is example, and commented out - nothing to free
	//~Fraction() {}

	int getNumerator() const { return numerator; }
	int getDenominator() const { return denominator; }

	Fraction operator+(const Fraction& f2);

private:
	int numerator;
	int denominator;
};

//Fraction operator+(const Fraction& f1, const Fraction& f2);

Fraction operator*(const Fraction& f1, const Fraction& f2);

std::ostream& operator<<(std::ostream& os, const Fraction& f);

void classes_test();