//Check if a string is a palindrome

#include<iostream>
using namespace std;

int main()
{
    string str1;
    cout<<"Enter a string:";
    getline(cin,str1);

    string str2;
    for(int i=str1.size()-1;i>=0;i--){
        str2.push_back(str1[i]);
    }

    if(str2.compare(str1)==0){
        cout<<"String is a palindrome";
    }
    else cout<<"String is not a palindrome";

    return 0;
}
