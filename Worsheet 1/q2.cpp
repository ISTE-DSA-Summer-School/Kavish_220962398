//Inverted mirror right triangle star pattern

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;

    for(int i=n;i>=1;i--){
        for (int k=0;k<n-i;k++){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
