#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
int main()

{

int x=25,y=3,z=12,w=4;

cout << "x == z: " << (x == z) << endl;
cout << "y != z - 9: " << (y != z - 9) << endl;
cout << "x - y == z + 10: " << (x - y == z + 10) << endl;
cout << "!(z < w): " << !(z < w) << endl;
cout << "w - y < x - 2 * z: " << (w - y < x - 2 * z) << endl;


return 0;
 
}
