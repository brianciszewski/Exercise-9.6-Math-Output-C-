// Brian Ciszewski
// Exercise 9.6


#include<iostream>
#include<string>
using namespace std;


	class Rational
	{
	public:
		int numerator;
		int denominator;

		void add(int n1, int d1, int n2, int d2) {
			int numerator = (n1 * d2) + (n2 * d1);
			int denominator = (d1 * d2);

			string fraction = to_string(numerator) + "/" + to_string(denominator);
			cout << "The sum of the 2 fractions is " << endl;
		};

		// +,- :: cross multiply, call to simplify to reduce fraction, return fraction string
		// *,/ :: multipy/divide by whole numbers, call to simplify to reduce fraction

		/*
		for (numFractions)
			input first
				append to arraylist
			input second
				append to arraylist
			...
			for (numFractions)   { 0,1,2,3,4,5,6,7,8,9 }
								 { a,b,a,b,a,b,a,b,a,b }
				int x = 0;
				int y = 2;
				arraylist[x] * arraylist[y]
				arraylist[x+1] * arraylist[y-1]
				*/
	};


	int main() {

		Rational fraction;
		Rational fraction1;
		Rational fraction2;

		fraction1.numerator = 5;
		fraction1.denominator = 7;
		fraction2.numerator = 3;
		fraction2.denominator = 4;

		fraction.add(fraction1.numerator, fraction1.denominator, fraction2.numerator, fraction2.denominator);

	}



	// Class Rational
	// include int to store passed numerator/denominator from fractions, private this data
	// use constructor to initalize this object
	//	*** store fractions in reduced form, 2/4 == 1/2
	// public functions for:: +,-,*,/,toRationalString,toDouble
