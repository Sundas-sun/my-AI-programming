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
    int a, b, c, d;
     
     cout << "Enter four numbers:";
     cin >> a >> b >> c >> d;
     
     int max = a;
     if (b > max) max = b;
     if (c > max) max = c;
     if (d> max) max = d;
     
    
    cout<<" Maximum num :" <<max << endl;

    return 0;
}