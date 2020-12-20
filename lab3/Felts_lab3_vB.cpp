/*
    Name: T. Felts
    Date: 9/3/2020
    Class: csc1710
    Location of program: ~/csc1710/lab2/lab3.cpp

*/

#include<iostream>
using namespace std;
int main()

{

//entering lab grades
double lab1;
double lab2;
double lab3;
double lab4;
//cout << "Enter grades for each lab, pressing Enter after each lab grade " << endl;
cin >> lab1; 
cin >> lab2; 
cin >> lab3; 
cin >> lab4; 

//entering quiz grades
double quiz1;
double quiz2;
double quiz3;
//cout << "Enter grades for each quiz, pressing Enter after each quiz grade " << endl;
cin >> quiz1; 
cin >> quiz2; 
cin >> quiz3; 

//entering program grade
double program;
//cout << "Enter your program grade " << endl;
cin >> program; 

//entering test grade
double test;
//cout << "Enter your test grade " << endl;
cin >> test; 


double total;
total = (((lab1 + lab2 + lab3 + lab4)/4 * 0.1 * 10) + ((quiz1 + quiz2 + quiz3)/3 * 0.1 * 10) + ((program) * 0.3) + ((test) * 0.3))/.8;
cout << "Total Average Percentage=" << total << endl;

   return 0;
}
                              
         
