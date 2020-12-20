
// adding libraries

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
//initialize variables
 int p=17, q=4, r=3;
 double j=3.00, k=5.00;

//output the calculations 

 cout << "p-q*r = " << p-q*r << endl;
 cout << "p/r = " << p/r << endl;
 cout << "p%r = " << p%r << endl;
 cout << "p/q/r = " << p/q/r << endl;
 cout << "q+r%p = " << q+r%p << endl;
 cout << "q*j/p = " << q*j/p << endl;
 cout << "p/q/j = " << p/q/j << endl;
 cout << "p/j/q = " << p/j/q << endl;
 // next one gave a complier error so i commented it out 
k= k/(r/q);
 cout << "k /=r/q = " << k << endl;

 cout << "j/-q = " << j/-q << endl;
 cout << "p*r/2 = " << p*r/2 << endl;

 return 0;
}
