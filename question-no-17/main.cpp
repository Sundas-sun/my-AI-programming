/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double number = 15.58971;

    int integralPart = number;
    double fractionalPart = number - integralPart;

    cout << "Integral Part: " << integralPart << endl;
    cout << "Fractional Part: " << fractionalPart << endl;

    return 0;
}