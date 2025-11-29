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
    float marks1, marks2, marks3, marks4, marks5, total, average;
    cout<< "Enter marks of 5 subjects: ";
    cin>> marks1 >> marks2 >> marks3 >> marks4 >> marks5;
    total = marks1 + marks2 + marks3 + marks4 + marks5;
    average = total / 5;
    
    cout<< "Total marks = " << total <<endl;
    cout<< "Average = " << average <<endl;
    
    return 0;
}