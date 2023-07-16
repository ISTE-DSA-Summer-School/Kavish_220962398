//Given two integers A and B. The task is to swap two numbers by interchanging the values of A and B.
//Find implementations of the following two functions: void swap(int *A, int *B) , void swap(int &A, int &B)

#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n1,n2;
    cout<<"Enter first number:";
    cin>>n1;
    cout<<"Enter second number:";
    cin>>n2;

    swap(&n1,&n2);
    cout<<"(Using pointers)Swapped numbers are "<<n1 <<" and "<<n2;

    cout<<endl;

    swap(n1,n2);
    cout<<"(Using references)Swapped numbers are "<<n1 <<" and "<<n2;

    return 0;
}

