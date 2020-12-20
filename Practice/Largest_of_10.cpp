

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;
double larger(double x, double y)
{
double max;
if (x>=y)
    max = x;
else
    max = y;
return max;

}
int main()
{
    int count;
    int num, max;
    cin >> num;
    max=num;
        for(int i=1; i<10; i++)
        {
            cin >> num;
            max = larger(max, num);
        }
    cout<< "largest value = " << max << endl;
    return 0;
}

