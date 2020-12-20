/*
    Name: T. Felts
    Date: 8/27/2020
    Class: csc1710
    Location of program: ~/csc1710/lab2/lab2.cpp

*/

#include<iostream>
using namespace std;
int main()

{
int bills1;
cout << "Enter number of $1 bills: " << endl;
cin >> bills1; 

int bills5;
cout << "Enter number of $5 bills: " << endl;
cin >> bills5; 

int bills10;
cout << "Enter number of $10 bills: " << endl;
cin >> bills10; 

int bills20;
cout << "Enter number of $20 bills: " << endl;
cin >> bills20; 

int total;
total = (bills1 * 1) + (bills5 * 5) + (bills10 * 10) + (bills20 *20);
cout << "Total =" << total << endl;

   return 0;
}
                              
