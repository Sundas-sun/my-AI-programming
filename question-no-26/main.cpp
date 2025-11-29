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
    float rupees = 12000;
    double dollarRate = 60;
    double dollars = rupees / dollarRate;
    
    
    
    std::cout<< "Rs." << rupees << "= $ "<< dollars << "USD" << endl;

    return 0;
}