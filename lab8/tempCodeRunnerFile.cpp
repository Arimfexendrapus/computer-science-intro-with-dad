/*
Name : Tyler Felts
Date : 10/8/2020
Class : CSC 1710
Path : ~/csc1710/lab8/Felts_lab8.cpp
Description : factorial; double factorial; .
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{

// factorial using for

unsigned long long num,i,fact=1;
cout << "input number to calculate factorial up to the number 20" << endl;
cin>>num;
//input validation
while(num < 1 || num > 20)
{
cout << "Invalid number. Please reenter: " ;
cin >> num;
}
//calculation
for (i=1;i<=num;i++)
fact=fact*i;
//output
cout<<"the factorial of "<<num<< " is "<<fact<<endl;

//double factorial using do while

unsigned long long num2,i2,fact2=1;
cout << "input an odd number to calculate the double factorial up to the number 33" << endl;
cin>>num2;
//input validation
while(num2 < 1 || num2 > 33 || num2%2==0)
{
cout << "Invalid number. Please reenter: " ;
cin >> num2;
}
//calculation
i2=1;
do 
{
fact2=fact2*i2;
i2=i2+2;
}
while (i2<=num2);
//output
cout<<"the double factorial of "<<num2<< " is "<<fact2<<endl;

//Geometric sequence using for 

double a=0.5, r=0.5,sum;
unsigned long long int i3,c;
cout<<"input a number to find the geometric sequence using that many interations"<<endl;
cin>>i3;
for(c=1;c<=i3;c++)
{
    a=a+(a*(r/i3));
    sum=a;
}

cout<<sum<<endl;




















}

