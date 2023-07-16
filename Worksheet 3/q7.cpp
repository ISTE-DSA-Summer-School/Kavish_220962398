//Remove duplicates from a sorted array using pointers.Given a sorted array, write a function to remove duplicates in-place using pointers.
//The function should return the new length of the array

#include <iostream>
using namespace std;

/*int RemoveDuplicate(int* arr, int len) {
    if (len == 0)
        return 0;

    int k = 0;
    for (int i=1;i<len;i++) {
        if (arr[i]!=arr[k]){
            k++;
            arr[k]=arr[i];
        }
    }

    return k+1;
}*/

int RemoveDuplicate(int* arr, int len) {
    if (len == 0)
        return 0;

    int l,k=len;
    for (int i=0;i<len;i++) {
        if(arr[i+1]==arr[i]){
            l=len-i;
            for(int j=i+1;j<l;j++){
                arr[j]=arr[j+1];
            }
            k--;
            len--;
            if(i==0){i=-1;}
            else i--;
        }
    }

    return k+1;
}

int main() {
    int len;
    cout<<"Enter the length of the array:";
    cin>>len;

    int a[len];
    cout<<"Enter the elements of the sorted array:"<<endl;
    for(int i=0;i<len;i++){
        cin>>a[i];
    }

    int len2 = RemoveDuplicate(a, len);

    cout << endl << "Array after removing duplicates: ";
    for (int i = 0; i < len2; i++) {
        cout << a[i] << " ";
    }
    cout << endl << "New Length: " << len2;

    return 0;
}
