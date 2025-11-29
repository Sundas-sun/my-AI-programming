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
    float pi = 3.14;
    float radius, area, circumference;
    cout<< "Enter radius of circle: ";
    cin>> radius;
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    
    cout<< "Area = " << area << endl;
    cout<< "cirumference = " << circumference <<endl;

    return 0;
}