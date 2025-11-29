/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    float vi,t, a, s;
    cout << "Enter value of vi " ;
    cin >> vi;
    cout << "Enter value of t " ;
    cin >> t;
    cout << "Enter value of a " ;
    cin >> a;
    s = ( vi * t ) + ( 0.5 * a * t * t);
    
    cout<<" Value of S = " << s << endl;

    return 0;
}