//Write a function that takes two strings as input and determines if they are anagrams of each other.
//The function should return True if the strings are anagrams and False otherwise.

#include<iostream>
#include<algorithm>
using namespace std;

bool IsAnagram (string s1,string s2){
    for(int i=0;i<s1.size();i++){
        s1[i]=char(tolower(s1[i]));
    }
    for(int i=0;i<s2.size();i++){
        s2[i]=char(tolower(s2[i]));
    }

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if(s1.compare(s2)==0){
        return true;
    }
    else return false;
}

int main()
{
    string str1,str2;
    cout<<"Enter first string:";
    getline(cin,str1);
    cout<<"Enter second string:";
    getline(cin,str2);

    cout<<boolalpha<<IsAnagram(str1,str2);

    return 0;
}
