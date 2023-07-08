//Find the length of the longest word in a sentence

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);

    string word="";
    vector<string> words;

    for(int i=0;i<str.size();i++){
        if(!isspace(str[i])){
            word.push_back(str[i]);
            if(i==(str.size()-1)){
                words.push_back(word);
            }
            continue;
        }
        else if(isspace(str[i])){
            words.push_back(word);
            word="";
        }
    }

    string longest=words[0];
    for(int i=0;i<words.size();i++){
        if(words[i].size()>longest.size()){
            longest=words[i];
        }
    }

    cout<<"Longest word is:"<<longest<<endl;
    cout<<"Length of longest word:"<<longest.size();

    return 0;

}
