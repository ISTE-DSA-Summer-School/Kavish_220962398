//Write a program for the following: string is reversed from half

#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);

    int l=str.size();
    char temp;
    for(int i=0;i<l/4;i++){
        temp=str[i];
        str[i]=str[l/2-i-1];
        str[l/2-i-1]=temp;
    }
    int k=0;
    if (l%2==0){
        for(int j=l/2;j<3*l/4;j++){
            temp=str[j];
            str[j]=str[l-k-1];
            str[l-k-1]=temp;
            k++;
        }
    }
    if(l%2==1){
        for(int j=l/2+1;j<3*l/4+1;j++){
            temp=str[j];
            str[j]=str[l-k-1];
            str[l-k-1]=temp;
            k++;
        }
    }

    cout<<str;

    return 0;
}
