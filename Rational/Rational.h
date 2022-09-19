#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
	public:
		Rational(int=0, int=1);
        Rational addition(Rational&);
        Rational substraction(Rational&);
        Rational multiplication(Rational&);
        Rational division(Rational&);
        int reduction(int, int);
        void printRational();
        void printRationalAsFloat();
    private:
        int numerator, denominator;
};

#endif
