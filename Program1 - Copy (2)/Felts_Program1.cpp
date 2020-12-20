#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
int main()

{

// initialize variables

double p, n, d, q, T, Tq, Td, Tn;

// the double letters are the integers or whole number of coins, then i use that to get the leftovers and continue dividing the rest of the change

int qq, dd, nn, TT;

// reassigning for ease

int Q, D, N, P;

//get the total amount of money

cout << "Input the total amount of money" << endl;
cin >> T;

//get the number of quarters and determine the leftovers

q=T/0.25;
//cout << q << endl;
qq=q;
//cout << qq << " is the number of quarters" << endl;
//cout << qq << endl;
Tq= T-(qq*.25);
//cout << Tq << endl;

//get the number of dimes and determine the leftovers

d=Tq/0.1;
//cout << d << endl;
dd=d;
//cout << dd << " is the number of dimes" << endl;
//cout << dd << endl;
Td= Tq-(dd*.1);
//cout << Td << endl;

//get the number of nickels and determine the leftovers

n=Td/0.05;
//cout << n << endl;
nn=n;
//cout << nn << " is the number of nickles" << endl;
//cout << nn << endl;
Tn= Td-(nn*.05);
//cout << Tn << endl;

//get the number of pennies and determine the leftovers

p=Tn/0.01;
//cout << p << endl;
//cout << p << " is the number of pennies" << endl;

Q=qq;
D=dd;
N=nn;
P=p;

//Total

TT=Q+D+N+P;

cout << endl;
cout<<left<<setw(20)<<setfill(' ')<<"Coin type"<< right<<setw(10)<<setfill(' ')<<"Number"<<endl;
cout << endl;
cout<<left<<setw(20)<<setfill(' ')<<"quarters:"<< right<<setw(10)<<setfill(' ')<<Q<<endl;
cout << endl;
cout<<left<<setw(20)<<setfill(' ')<<"dimes:"<< right<<setw(10)<<setfill(' ')<<D<<endl;
cout << endl;
cout<<left<<setw(20)<<setfill(' ')<<"nickels:"<< right<<setw(10)<<setfill(' ')<<N<<endl;
cout << endl;
cout<<left<<setw(20)<<setfill(' ')<<"pennies:"<< right<<setw(10)<<setfill(' ')<<P<<endl;
cout << endl;
cout<<left<<setw(20)<<setfill(' ')<<"Total"<< right<<setw(10)<<setfill(' ')<<TT<<endl;
cout << endl;


return 0;
 
}