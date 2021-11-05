// Brian Ciszewski
// Exercise 9.6
// two fractions are added, subtracted, multiplied, or divided by the rational class functions
// the fractions can be changes and inputted from the user in further builds as they are objects of the rational class


#include<iostream>
#include<string>
using namespace std;

class Rational
{
public:

	int numerator;
	int denominator;
	// performs appropirate math for the addition,subtraction, multiplication, division. 
	// reduces fraction by use of gcf function in this class. Returns a string of the fraction.
	string add(int n1, int d1, int n2, int d2) {
		numerator = (n1 * d2) + (n2 * d1);
		denominator = (d1 * d2);

		int gcf = this->gcf(numerator, denominator);
		numerator /= gcf;
		denominator /= gcf;

		string fraction = to_string(numerator) + "/" + to_string(denominator);
		return fraction;
	}

	string subtract(int n1, int d1, int n2, int d2) {
		numerator = (n1 * d2) - (n2 * d1);
		denominator = (d1 * d2);

		int gcf = this->gcf(numerator, denominator);
		numerator /= gcf;
		denominator /= gcf;

		string fraction = to_string(numerator) + "/" + to_string(denominator);
		return fraction;
	}

	string multiply(int n1, int d1, int n2, int d2) {
		numerator = (n1 * n2);
		denominator = (d1 * d2);

		int gcf = this->gcf(numerator, denominator);
		numerator /= gcf;
		denominator /= gcf;

		string fraction = to_string(numerator) + "/" + to_string(denominator);
		return fraction;
	}

	string divide(int n1, int d1, int n2, int d2) {
		numerator = (n1 * d2);
		denominator = (d1 * n2);

		int gcf = this->gcf(numerator, denominator);
		numerator /= gcf;
		denominator /= gcf;

		string fraction = to_string(numerator) + "/" + to_string(denominator);
		return fraction;
	}

	double toDouble(int n1, int d1) {
		double fraction = ((double)n1 / (double)d1);
		return fraction;
	}
	// finds the greatest common factor of the recieved numerator and denominator of each fraction from the above functions
	// loop checks starting from 1 less than the larger of the 2 (n/d), and incrimently decreases. Checks for even dvision which
	// indicates a divisor of both the n/d.
	int gcf(int n, int d) {
		int gcf = 1;
		int A;
		A = n;
		if (d > n)
			A = d;
		A -= 1;

		for (int i = A; i > 0; i--) {
			if ((n % A) == 0)
				if ((d % A) == 0)
				{
					gcf = A;
					break;
				}
			A -= 1;
		}
		return gcf;
	}
};



// main module of program
int main() {
	// creates object to call rational class and store data in fraction objects 1 and 2
	Rational fraction;
	Rational fraction1;
	Rational fraction2;
	// stores the numerator and denominators of the fractions in each object
	fraction1.numerator = 5;
	fraction1.denominator = 20;
	fraction2.numerator = 20;
	fraction2.denominator = 4;

	// outputs the maths performed on the fractions in a user friendly manner
	cout << "The sum of " << fraction1.numerator << "/" << fraction1.denominator << " and " << fraction2.numerator <<
		"/" << fraction2.denominator << " is " <<
		fraction.add(fraction1.numerator, fraction1.denominator, fraction2.numerator, fraction2.denominator) << R"(.)" << endl;

	cout << "The difference between " << fraction1.numerator << "/" << fraction1.denominator << " and " << fraction2.numerator <<
		"/" << fraction2.denominator << " is " <<
		fraction.subtract(fraction1.numerator, fraction1.denominator, fraction2.numerator, fraction2.denominator) << R"(.)" << endl;

	cout << "The product of " << fraction1.numerator << "/" << fraction1.denominator << " and " << fraction2.numerator <<
		"/" << fraction2.denominator << " is " <<
		fraction.multiply(fraction1.numerator, fraction1.denominator, fraction2.numerator, fraction2.denominator) << R"(.)" << endl;

	cout << "The quotient of " << fraction1.numerator << "/" << fraction1.denominator << " and " << fraction2.numerator <<
		"/" << fraction2.denominator << " is " <<
		fraction.divide(fraction1.numerator, fraction1.denominator, fraction2.numerator, fraction2.denominator) << R"(.)" << endl;

	cout << fraction1.numerator << "/" << fraction1.denominator << " is equal to " <<
		fraction.toDouble(fraction1.numerator, fraction1.denominator) << endl;
}



// Class Rational
	// include int to store passed numerator/denominator from fractions, private this data
	// use constructor to initalize this object
	//	*** store fractions in reduced form, 2/4 == 1/2
	// public functions for:: +,-,*,/,toRationalString,toDouble

