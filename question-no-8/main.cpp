/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


int main()
{
    float f,c;
    
    cout << "Enter temperature in farenheit: ";
    cin >> f;
    
    c = 5/9 * (f- 32);
    cout << " Temperatue in celcius = " << c << endl;

    return 0;
}