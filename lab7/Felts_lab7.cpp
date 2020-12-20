
//Name : Tyler Felts
//Date : 10/1/2020
//Class : CSC 1710
//Path : ~/csc1710/lab7/Felts_lab7.cpp
// Description : temperature conversion table.


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{

//initiallize variables st= starting temp et= ending temp it= increment temp
//F
double st, et, it;
//C
double stc, etc;
//K
double stk, etk;
//other
double count;
// prompt for input

    cout << "Input the starting lower temperature followed by the ending higher temperature, ending with the increment, all separated by spaces and no smaller that 0.001 degrees" << endl;
    cin >> st >> et >> it;

// F to C to K 
// C = (F-32)/1.8
// K = (F-32)/1.8 + 273.15

// F to C conversion
    stc = (st-32)/1.8;
    etc = (et-32)/1.8;

// F to K conversion
    stk= (st-32)/1.8 + 273.15;
    etk= (et-32)/1.8 + 273.15;

count = st;

// the starting line for the table
    cout << left << setw(20) << setfill ('-') << "Fahrenheit" << left << setw(20) << setfill ('-') << "Celcius" << left << setw(20) << setfill (' ') << "Kelvin" << endl;

// making the rest of the lines of the table
while (count<=et)
{
  cout << setprecision(3);
  cout << fixed << showpoint;
    cout << left << setw(20) << setfill ('-') << st << left << setw(20) << setfill ('-') << ((st-32)/1.8) << left << setw(20) << setfill (' ') << ((st-32)/1.8 + 273.15) << endl;
    st=st+it;
    count= count + it;

}




}

