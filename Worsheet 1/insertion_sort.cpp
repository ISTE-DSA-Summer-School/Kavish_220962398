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

    int value, pos;
    for(int i=1;i<n;i++){
        value = arr[i];
        pos=i-1;
        while(pos>=0 && arr[pos]>value)
        {
            arr[pos+1]=arr[pos];
            pos=pos-1;
        }
        arr[pos+1]=value;
    }

    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
