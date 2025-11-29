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
    float inches = 25.4;
    float millimeters;
    
    cout << " Enter millimeters : ";
    cin >> millimeters;
    inches = millimeters / 25.4;
    
    cout<< millimeters << "millimeters = " << inches <<" inches" << endl;

    return 0;
}