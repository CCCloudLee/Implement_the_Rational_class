#include<iostream>
#include<iomanip>
#include "Rational.h"
using namespace std;

Rational::Rational(int n, int d)
{
    numerator=n;
    denominator=d;
}

Rational Rational::addition(Rational &a)
{
    Rational answer;
    answer.numerator=numerator*a.denominator + a.numerator*denominator;
    answer.denominator=denominator * a.denominator;
    int gcd=reduction(answer.numerator, answer.denominator);
    answer.numerator/=gcd;
    answer.denominator/=gcd;

    return answer;
}

Rational Rational::substraction(Rational &a)
{
    Rational answer;
    answer.numerator=numerator*a.denominator - a.numerator*denominator;
    answer.denominator=denominator * a.denominator;
    int gcd=reduction(answer.numerator, answer.denominator);
    answer.numerator/=gcd;
    answer.denominator/=gcd;

    return answer;
}

Rational Rational::multiplication(Rational &a)
{
    Rational answer;
    answer.numerator=numerator * a.numerator;
    answer.denominator=denominator * a.denominator;
    int gcd=reduction(answer.numerator, answer.denominator);
    answer.numerator/=gcd;
    answer.denominator/=gcd;

    return answer;
}

Rational Rational::division(Rational &a)
{
    Rational answer;
    answer.numerator=numerator * a.denominator;
    answer.denominator=denominator * a.numerator;
    int gcd=reduction(answer.numerator, answer.denominator);
    answer.numerator/=gcd;
    answer.denominator/=gcd;

    return answer;
}

void Rational::printRational()
{
    if(denominator==0)
        cout<<"Cannot calculate!";
    else if(numerator==0)
        cout<<"0";
    else if(denominator==1)
    	cout<<numerator;
    else
        cout<<numerator<<"/"<<denominator;
}

void Rational::printRationalAsFloat()
{
    if(denominator==0)
        cout<<"Cannot calculate!";
    else if(numerator==0)
        cout<<"0";
    else
    {
        double n=numerator, d=denominator;
        cout<<fixed<<setprecision(5)<<n/d;
    }
}

int Rational::reduction(int n, int d)
{
    if(d==0)
        return n;
    else
        return reduction(d, n%d);
}

