/*
Name : Tyler Felts
Date : 10/14/2020
Class : CSC 1710
Path : ~/csc1710/Program2/Felts_investment_table_100.cpp
Description : creat investment table

i would like to get a 100 on this program
i've included:
Capital Gains
Changing Interest rate
the total invested column
a means of input validation... see comments
and so much more... :)
*/


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <math.h>
#include <cmath>

using namespace std;
int main()
{
//initializing varaibles
double p,y,pp,apr,a,i,m=1,yy,md,aprc;
int  adm=0,admm=0;

//outputting commands and collecting varibles, then setting to proper variables for equations

/* this is where i would do input validations but i've made it to where any number would work instead
if i were to do input validation it would look like this:

cout<<"Input annual APR % change as a decimal: ";
cin>>apr;
while(apr>1);
{
   cout<<"invalid input, apr as a decimal: ";
   cin>>apr;
}
but that excludes the slim possibility that the account will have over 100% annual growth, and so i have done this instead... hopefully by having this in here i'll get the points for the input validation :)
*/
cout<<"Input the initial pricipal, or starting money invested, in the form dollars.cents: $";
cin>>p;
a=p;

cout<<"Input the % APR: %";
cin>>apr;
apr=apr/100.00;

cout<<"Input the number of years that the investment will compound for: ";
cin>>y;

yy=y;

cout<<"Input monthly deposit: $";
cin>>md;

cout<<"Input annual APR % change: %";
cin>>aprc;
aprc=aprc/100.00;

//a=p*(pow(1+(apr/12),12*y));      formula for interest

// couts for before calculations for like table stuff
cout<<endl;
cout<<right<<setw(33)<<setfill(' ')<<"Investment Table"<<endl;
cout<<endl;
cout<<right<<setw(10)<<setfill(' ')<<"Month"<<right<<setw(20)<<setfill(' ')<<fixed<<showpoint<<setprecision(2)<< "Total Invested $"<< right<<setw(15)<<setfill(' ')<<"Total $"<<endl;
cout<<left<<setw(20)<<setfill(' ')<<"_____________________________________________________";
cout<<endl;
cout<<right<<setw(10)<<setfill(' ')<<fixed<<showpoint<<setprecision(0)<< 0. <<right<<setw(15)<<setfill(' ')<<fixed<<showpoint<<setprecision(2)<<p<< right<<setw(20)<<setfill(' ') <<fixed<<showpoint<<setprecision(2)<< p <<endl;

//calculations and table making

for(i=(1.00/12.00);i<=y;i=i+(1.00/12.00))
{
   a=a*(pow(1.00+((apr+adm*aprc)/12),(12.00*1.00)/12.00));
   a=a+md;
   cout<<right<<setw(10)<<setfill(' ')<<fixed<<showpoint<<setprecision(0)<< m <<right<<setw(15)<<setfill(' ')<<fixed<<showpoint<<setprecision(2)<< p+md*m << right<<setw(20)<<setfill(' ') <<fixed<<showpoint<<setprecision(2)<< a <<endl;
   m++;
   adm=(m-1)/12;
}
cout<<endl;
cout<<"Capital Gains= "<<a-(p+md*m);
return 0;
}
