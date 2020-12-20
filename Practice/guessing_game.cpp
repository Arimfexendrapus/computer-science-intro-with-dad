#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;
int main()

{

int num, guess;
bool is_guessed;

srand(time(0));
num = rand() % 100;

is_guessed = false;

while (is_guessed==false)
{
    cout << "guess a number" << endl;
    cin >> guess;
    
    if (guess == num)
    {
        is_guessed=true;
        cout << "You guessed the right number" << endl;
    }
    else if (guess > num)
       {
        cout << "You guessed to high" << endl;
        cout << endl;
       }
    else if (guess < num)
        {
        cout << "You guessed to low" << endl;
        cout << endl;
        }
    
}

return 0;


}
