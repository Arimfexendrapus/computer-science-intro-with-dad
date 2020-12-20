/*
    Name: T. Felts
    Date: 8/27/2020
    Class: csc1710
    Location of program: ~/csc1710/lab2/lab2.cpp

*/

#include"math.h"
#include<iostream>
using namespace std;
int main()

{
int x;
int y;
int z;
double u;
double t;
char letter;
x = 2;
y = 6;
z = 9;
u = 2.345; 
t = 3.14159;
//letter="g";

int a1;
a1=x+y*z;
cout << "a1 =" << a1 << endl;
int a2;
a2=y*z/x/z;
cout << "a2 =" << a2 << endl;
int a3;
a3=y+z%x;
cout << "a3 =" << a3 << endl;
int a4;
a4=-x*y-z;
cout << "a4 =" << a4 << endl;
//int a5;
//a5=y%u;
//cout << "a5 =" << a5 << endl;
int a6;
a6=u/t;
cout << "a6 =" << a6 << endl;
//int a7;
//a7=z**2
//cout << "a7 =" << a7 << endl;
//int a8;
//a8=letter-2;
//cout << "a8 =" << a8 << endl;
int a9;
a9=static_cast<double>(y/z);
cout << "a9 =" << a9 << endl;


   return 0;
}
                             
