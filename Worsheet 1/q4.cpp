//Make a calculator that takes two numbers and one operand as input and prints the result

#include<iostream>
using namespace std;

int main()
{
    int a,b,result;
    cout<<"Enter two numbers:";
    cin>>a>>b;

    string op;
    cout<<"Enter an operand:";
    cin>>op;

    if(op=="+"){
        cout<<a<<op<<b<<"="<<a+b;
    }
    else if(op=="-"){
        cout<<a<<op<<b<<"="<<a-b;
    }
    else if(op=="*"){
        cout<<a<<op<<b<<"="<<a*b;
    }
    else if(op=="/"){
        cout<<a<<op<<b<<"="<<a/b;
    }
    else cout<<"Operand is invalid";
    return 0;
}
