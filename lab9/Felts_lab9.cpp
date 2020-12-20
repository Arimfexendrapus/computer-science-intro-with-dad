/*
Name : Tyler Felts
Date : 10/15/2020
Class : CSC 1710
Path : ~/csc1710/lab9/Felts_lab9.cpp
Description : factorial; double factorial; . into functions
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

unsigned long long int factorial(int a);
unsigned long long int doublefact(int a);
double geoseries(double a, double b);

int main()
{
    
 int num;
 unsigned long long int fact;
    cout << "input number to calculate factorial up to the number 20: ";
    cin>>num;
    while(num < 1 || num > 20)
        {
        cout<<endl;
        cout << "Invalid number. Please reenter: " ;
        cin >> num;
        }
    fact=factorial(num);
    cout<<"the factorial of "<<num<< " is "<<fact<<endl;

 int num2;
 unsigned long long int fact2;
    cout << "input an odd number to calculate the double factorial up to the number 33" << endl;
    cin>>num2;
    while(num2 < 1 || num2 > 33 || num2%2==0)
        {
        cout<<endl;
        cout << "Invalid number. Please reenter: " ;
        cin >> num2;
        }
    fact2=doublefact(num2);
    cout << "the double factorial of "<<num2<< " is "<<fact2<<endl;

int term;
double sum,a;
    cout<<"input a number to start the geometric sequence from"<<endl;
    cin>>a;
    cout<<"input a number to find the geometric sequence using that many interations"<<endl;
    cin>>term;
    sum=geoseries(a,term);
    cout<<sum<<endl;
 

}
unsigned long long int factorial(int a)
{
 unsigned long long i,fact=1;
   for (i=1;i<=a;i++)
    fact=fact*i;
    return fact;
}
unsigned long long int doublefact(int a)
{
    unsigned long long i2,fact2=1;
    i2=1;
    do 
    {
    fact2=fact2*i2;
    i2=i2+2;
    }
    while (i2<=a);
return fact2;
}
double geoseries(double a, double b)
{
    double sum;
    for(double i=1.00; i < b; i++)
    {
        sum += a;
        a *= .50;
    }
    return sum;
}