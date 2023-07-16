//Find the maximum sum sub array in an array using pointers.Given an array of integers,
//write a function to find the contiguous sub array with the largest sum using pointers.Return the sum of the subarray.

#include <iostream>
using namespace std;

int MaxSubarraySum(int* arr, int len) {
    int* start = arr;
    int* n = arr;
    int max_sum = 0;
    int current_sum = 0;

    while (n < arr + len) {
        current_sum += *n;

        if (current_sum >= max_sum) {
            max_sum = current_sum;
        }

        if (current_sum < 0) {
            current_sum = 0;
            start = n + 1;
        }

        n++;
    }

    return max_sum;
}

int main() {
    int len;
    cout<<"Enter the length of the array:";
    cin>>len;

    int a[len];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<len;i++){
        cin>>a[i];
    }

    int maxSum = MaxSubarraySum(a, len);

    cout << "Maximum Sum: " << maxSum << endl;

    return 0;
}
