//Write a program to reverse the digits of a number using pointers.

#include<iostream>
using namespace std;

void ReverseNum(int* num) {
    int rev = 0;
    while (*num > 0) {
        int dig = *num % 10;
        rev = rev * 10 + dig;
        *num=*num/10;
    }
    *num = rev;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    ReverseNum(&num);

    cout << "Reversed number: " << num;

    return 0;
}
