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
    int x,y,temp;
    
    cout << " Enter two numbers :";
    cin >> x >> y;
    temp = x;
    x=y;
    y=temp;
    
    cout<< " After interchange : x = " << x << " After interchange : y =" << y << endl ;

    return 0;
}