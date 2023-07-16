//Write a program to find the factorial of a number using pointers.

#include<iostream>
using namespace std;

int Fact(int* num) {
    int fact=1;
    for (int i = 1; i <= *num; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int fact = Fact(&num);

    cout<<"Factorial of the number :"<<fact;

    return 0;
}
