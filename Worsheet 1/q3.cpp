//Pyramid star pattern

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int k=(n-i);k>=1;k--){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"* ";
        }
        for(int k=(n-i);k>=1;k--){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

