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
    int age ;
    cout<< " Enter your age : " ;
    cin>> age ;
  int age_in_months = age * 12;
  int age_in_days = age * 365;
    cout<< " Age in months = " << age_in_months << endl;
    cout<< " Age in days = " << age_in_days << endl;

    return 0;
}