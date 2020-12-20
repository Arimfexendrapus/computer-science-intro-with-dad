#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
bool prime=false;
int min, max;
int facmin=min, facmax=(min-1), fac;

cout<< "input a minimum and maxumum number to search for prime numbers in between" << endl;
cin>>min>>max;

//loop for the numbers we're determining from 
for(min=min; min<=max; min++)
    {
//loop for the numbers we are dividing the 1st numbers with
        for(fac=2;fac<min;fac++)
        {
//seeing if the first number is divisible by the second and as long as its not 1 or itself it is non-prime
            if(min%fac==0)             
            prime = false;
            else
            prime=true;
            
        }
        if (prime ==  true)
            {   
            cout<< min<< endl;    
            prime=false;
            }
    }


}