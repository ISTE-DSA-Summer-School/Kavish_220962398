//Given a string, reverse it using stack

#include <iostream>
using namespace std;

class Stack{

    private:

        static const int MAX_SIZE = 100;
        char a[MAX_SIZE];
        int top;

    public:

        Stack(){
            top = -1;
        }

        bool isEmpty() {
            return top == -1;
        }

        bool isFull() {
                return top == MAX_SIZE - 1;
        }

        void push(char value) {
            if (!isFull()) {
                top++;
                a[top] = value;
            }
            else {
                cout << "Cannot push " <<", stack is full." << endl;
            }
        }

        char pop() {
            if (!isEmpty()) {
                char value = a[top];
                top--;
                return value;
            }
            else {
                cout << "Cannot pop from an empty stack." << endl;
                return 0;
            }
        }

        int peek() {
            if (!isEmpty()) {
                return a[top];
            }
            else {
                cout << "Stack is empty, cannot get the top element." << endl;
                return -1;
            }
        }
};

string reverseString(string str) {
    Stack stack;
    string reversedString = "";

    for (char c : str) {
        stack.push(c);
    }

    while (!stack.isEmpty()) {
        reversedString += stack.pop();
    }

    return reversedString;
}

int main() {
    string str;
    cout << "Enter a string:";
    getline(cin,str);

    string reversed = reverseString(str);
    cout << "Reversed String: " << reversed << endl;
    return 0;
}









