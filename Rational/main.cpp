#include <iostream>
#include "Rational.h"
using namespace std;


int main()
{
	int n1, d1, n2, d2;
	cout<<"Input first numerator: ";
    cin>>n1;
    cout<<"Input first denominator: ";
    cin>>d1;
    cout<<"Input second numerator: ";
    cin>>n2;
    cout<<"Input second denominator: ";
    cin>>d2;

    //Calculation
    Rational R1(n1, d1), R2(n2, d2);
    
    //addition
    R1.printRational();
    cout<<" + ";
    R2.printRational();
    cout<<" = ";
    Rational answer=R1.addition(R2);
    answer.printRational();
    cout<<" = ";
    answer.printRationalAsFloat();
    cout<<endl; 
    
    //subtraction
    R1.printRational();
    cout<<" - ";
    R2.printRational();
    cout<<" = ";
    answer=R1.substraction(R2);
    answer.printRational();
    cout<<" = ";
    answer.printRationalAsFloat();
    cout<<endl; 
    
    //multiplication
    R1.printRational();
    cout<<" * ";
    R2.printRational();
    cout<<" = ";
    answer=R1.multiplication(R2);
    answer.printRational();
    cout<<" = ";
    answer.printRationalAsFloat();
    cout<<endl;
    
    //division
    R1.printRational();
    cout<<" * ";
    R2.printRational();
    cout<<" = ";
    answer=R1.division(R2);
    answer.printRational();
    cout<<" = ";
    answer.printRationalAsFloat();
    cout<<endl;


    system("pause");
    return 0;
}
