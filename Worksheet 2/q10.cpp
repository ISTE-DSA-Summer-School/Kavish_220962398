//Write a function that takes a string as input and returns the most frequent character(s) in the string.
//If there are multiple characters with the same maximum frequency, return all of them in a list.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<char> MostFreq(string str){

    for(int i=0;i<str.size();i++){
        str[i]=char(tolower(str[i]));
    }
    sort(str.begin(),str.end());

    vector<char> mfreq;
    int n,maximum;
    n=maximum=1;
    for(int i=0;i<str.size();i++){
        if(str[i+1]==str[i]){
            n++;
        }
        else if(str[i+1]!=str[i] || i==(str.size()-1)){
            if(n>maximum){
                mfreq.clear();
                mfreq.push_back(str[i]);
                maximum=n;
                n=1;
                continue;
            }
            if(n==maximum){
                mfreq.push_back(str[i]);
                n=1;
            }
        }
    }

    return mfreq;

}

int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);

    vector<char> c=MostFreq(str);

    cout<<"The most frequent element(s) is/are:"<<endl;
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<endl;
    }

    return 0;
}
