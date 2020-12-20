#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;
int main()

{

double a,b,c;

cout << "input the length of the sides of a triangle starting with the biggest side" << endl;

cin >> c >> a >> b;

if (pow(c,2)==(pow(a,2)+pow(b,2)))
cout << "this triangle is a right triangle" << endl;
else if (pow(c,2)==(pow(b,2)+pow(a,2)))
cout << "this triangle is a right triangle" << endl;
else 
cout<< "this triangle is not a right triangle" << endl;

}
