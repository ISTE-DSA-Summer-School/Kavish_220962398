#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number of elements:";
    int n;
    cin>>n;

    cout<<"Enter the elements:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        int small=arr[i];
        int pos;
        for(int j=i+1;j<n;j++){
            if(arr[j]<small){
                small=arr[j];
                pos=j;
            }
        }
        arr[pos]=arr[i];
        arr[i]=small;
    }

    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
