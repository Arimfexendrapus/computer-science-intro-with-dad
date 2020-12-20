
//Name : Tyler Felts
//Date : 10/16/2020
//Class : CSC 1710
//Path : ~/csc1710/Practice/Felts_dice_roll.cpp
// Description : dice roll


#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;
int roll_dice(int num);
int main()
{
cout << "the number of times the dice are rolled to "
     << "get the sum 10 = " << roll_dice(10) << endl;
cout << "the number of times the dice are rolled to "
     << "get the sum 6 = " << roll_dice(6) << endl;

     return 0;
}
int roll_dice(int num)
{

int die1;
int die2;
int sum=0;
int  roll_count=0;

srand(time(0));
do
{
    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;
    sum = die1+die2;
}
while (sum<=num);
return sum;

}

