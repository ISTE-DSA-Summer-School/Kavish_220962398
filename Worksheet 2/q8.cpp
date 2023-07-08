//Write a function that finds the first non-repeated character in a string.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

char first_non_rep(string str){

    string str2=str;
    sort(str2.begin(),str2.end());

    vector<char> c;

    for(int i=0;i<str2.size();i++){
        if(str2[i+1]!=str2[i] && str2[i-1]!=str2[i]){
            c.push_back(str2[i]);
        }
    }

    char a;
    int flag=0;
    for(int i=0;i<str.size();i++){
        for(int j=0;j<c.size();j++){
            if(str[i]==c[j]){
                a=str[i];
                flag=1;
            }
        }
        if(flag==1)break;
    }

    return a;
}

int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);

    cout<<"The first non-repeated character in the string is:"<< first_non_rep(str);
    return 0;
}

