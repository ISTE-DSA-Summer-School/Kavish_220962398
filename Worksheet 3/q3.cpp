//Using pointers, Write a program to find the greatest among three numbers

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;

    int *greatest;

    if(b>a){
        if(c>b){
            greatest=&c;
        }
        else greatest=&b;
    }
    else {
        if(c>a){
            greatest=&c;
        }
        else greatest=&a;
    }

    cout<<"Greatest number is:" <<*greatest;

    return 0;
}
