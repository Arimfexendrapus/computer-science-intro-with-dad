#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{

int x,y,z;
double largest;

x=1;
y=2;
z=3;

if (x>y && x>z)
        cout << x << " is the largest" << endl;
else if (y>x && y>z)
        cout << y << " is the largest" << endl;
else if (z>x && z>y)
        cout << z << " is the largest" << endl;

return 0;

}
