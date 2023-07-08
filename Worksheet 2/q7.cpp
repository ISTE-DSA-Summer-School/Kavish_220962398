//Write a convert to convert all letters to uppercase

#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);

    for(int i=0;i<str.size();i++){
        if (str[i]>=97 && str[i]<=122)
        {
            str[i] =str[i]-32;
        }
    }

    cout<<"String in uppercase is:"<<str;

    return 0;
}
