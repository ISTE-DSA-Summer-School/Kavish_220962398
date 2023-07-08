//Display the use of any 5 inbuilt string functions.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1="Hello world!";
    string str2="Hey,";

    int l=str1.length();
    cout<<l<<endl;

    cout<<str1.find("world")<<endl;

    cout<<str2.compare(str1)<<endl;

    str2.insert(4,str1);
    cout<<str2<<endl;

    str1.erase(5);
    cout<<str1;

    return 0;
}
