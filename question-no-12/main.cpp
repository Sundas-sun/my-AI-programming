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
  const float pi= 3.1417;
  float radius , height , volume ;
  
  cout << "Enter radius: ";
  cin >> radius ;
  cout << "Enter height : ";
  cin >> height ;
  volume = pi * radius * radius * height;
  
  
     cout<<"Volume of cylinder = " << volume << endl;

    return 0;
}