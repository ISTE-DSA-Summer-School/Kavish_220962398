// Find the number of occurrences of a word in a sentence

#include<iostream>
using namespace std;

int main()
{
    string str1,str2;
    cout<<"Enter a string:";
    getline(cin,str1);

    cout<<"Enter the word to be checked for:";
    getline(cin,str2);

    int num=0;
    int flag=0;
    for(int i=0;i<str1.size();i++){
        if(str1[i]==str2[0]){
            flag=1;
            for(int k=0;k<str2.size();k++){
                if(str1[i+k]!=str2[k]){
                    flag=0;
                    continue;
                }
            }
            if(flag==1) num++;
        }
    }

    cout<<"Number of occurrences of the word = "<<num;


    return 0;
}
