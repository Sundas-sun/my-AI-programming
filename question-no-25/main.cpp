/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float a, b, c, s, area;
    cout<< "Enter three sides of triangle: ";
    cin>> a >> b >> c;
    s = (a + b + c) / 2;
    area= sqrt(s * (s - a) * (s - b) * (s - c));
    
    cout<< "Area of triagle = " << area << endl;
    
     return 0;
}