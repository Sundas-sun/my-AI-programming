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
    int rollno;
    float pf, ict, cg;
    
    cout <<" Enter Roll no :";
    cin >> rollno;
    
    cout << "Enter marks in PF ";
    cin >> pf ;
    cout << "Enter marks in ICT ";
    cin >> ict ;
    cout << "Enter marks in CG ";
    cin >> cg ;
    float total = pf + ict + cg;
    float average = total/3;
    
    cout << "Total marks = " << total <<endl;
    cout << "Average Marks = " <<average <<endl;


    return 0;
}