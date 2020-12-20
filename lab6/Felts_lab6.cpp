#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{

//initializing variables

int y;

//assigning a year to the variable
cout << "input a year to determine whether or not it is a leap year" << endl;
cin >> y;

// switch determines verb and whether or not "y" is a leap year

{
if (y>2020)
{
                if ((y%4)==0 && (y%100)!=0 && (y%400)==0)
                        cout << y << " will be a leap year" << endl;
                else if ((y%4)==0 && (y%100)==0 && (y%400)==0)
                        cout << y << " will be a leap year" << endl; 
		else 
			cout << y << " will not be a leap year" << endl;
}

else if (y==2020)
{
                if ((y%4)==0 && (y%100)!=0 && (y%400)==0)
                        cout << y << " is a leap year" << endl;
                else if ((y%4)==0 && (y%100)==0 && (y%400)==0)
                        cout << y << " is a leap year" << endl;
                else
                        cout << y << " is not a leap year" << endl;
}
else if (y<2020)
{
                if ((y%4)==0 && (y%100)==0 && (y%400)==0)
                        cout << y << " was a leap year" << endl;
                else if ((y%4)==0 && (y%100)!=0)
                        cout << y << " was a leap year" << endl;
                else if ((y%4)==0 && (y%100)==0 && (y%400)!=0)
                        cout << y << " was not a leap year" << endl;
}
}

return 0;

}

