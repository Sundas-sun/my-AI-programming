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
    string name, gender;
    int age;
    float height;
    cout<< "Enter name: ";
    cin>> name;
    cout<< "Enter age: ";
    cin>> age;
    cout<< "Enter height: ";
    cin>> height;
    cout<< "Enter gender: ";
    cin>> gender;
    cout<< "Name = " << name << endl;
    cout<< "Age = " << age << endl;
    cout<< "Height = " << height << endl;
    cout<< " Gender = " << gender << endl;

    return 0;
}