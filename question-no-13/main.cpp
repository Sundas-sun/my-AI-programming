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
    float pi = 3.147;
    float radius , area;
    
    cout << "Enter radius : ";
    cin >> radius;
     area = pi * radius * radius;
     
    cout<<" Area of the circle = " << area << endl;

    return 0;
}