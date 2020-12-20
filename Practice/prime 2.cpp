#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{

int min, max,nmin;
int facmin=min, facmax=(nmin-1), fac;

cout<< "input a minimum and maxumum number to search for prime numbers in between" << endl;
cin>>min>>max;

//loop for the numbers we're determining from 
for(nmin=min; nmin<=max; nmin++)
    {
//loop for the numbers we are dividing the 1st numbers with
        for(fac=2;fac<nmin;fac++)
        {
            int count=0;
//seeing if the first number is divisible by the second and as long as its not 1 or itself it is non-prime
		if(nmin%fac==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<nmin;
	}
	else
	{
		endl;
	}
        }
        
    }


}