
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int nth_fibo_num(int first, int second, int position)
{
    int current, counter;

    if(nth_fibo_num == 1)
    current = first;
    else if (nth_fibo_num == 2)
        current = second;
    else
    {
        counter = 3;
        while (counter<=nth_fib)
        {
            current = second + first;
            first = second;
            second = current;
            counter++;
        }
    }
    return current;
}

int main()
{
    int first_fib_num, second_fib_num, nth_fib;

    cout << "enter the first two fibonacci numbers: ";
    cin >> first_fib_num>> second_fib_num;
    cout<< endl;
    cout<<"the first two fibonacci numbers are: "<<first_fib_num<< " and "<<second_fib_num<< endl;

    cout<<"enter the posistion of the desired fibonacci number: ";
    cin>> nth_fib;
    cout<<endl;

    cout<<"the fibonacci number at position "<< nth_fib<< " is "<<nth_fibo_num(first_fib_num,second_fib_num,nth_fib)
}