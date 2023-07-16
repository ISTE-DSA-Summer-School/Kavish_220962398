//Write a program to swap 2 numbers without using a 3rd variable.

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;

    b=a+b;
    a=b-a;
    b=b-a;

    cout<<"Swapped numbers are:"<< a << " and  "<< b;

    return 0;
}
