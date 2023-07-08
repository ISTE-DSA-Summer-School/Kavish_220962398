//Write a program to reverse a string without using any inbuilt functions.

#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);

    int l=str.size();
    for(int i=0;i<l/2;i++){
        char temp;
        temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
    }

    cout<<"Reversed string is:";
    cout<<str;

    return 0;
}
