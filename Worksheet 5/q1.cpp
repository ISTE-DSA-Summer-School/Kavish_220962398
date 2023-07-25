//Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
/*An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.*/

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
                return '\0';
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

bool isValid(string s) {

    Stack stack;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            stack.push(c);
        }
        else if (!stack.isEmpty()) {
            char topChar = stack.peek();
            if ((c == ')' && topChar == '(') || (c == '}' && topChar == '{') || (c == ']' && topChar == '[')) {
                stack.pop();
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
    }

    return stack.isEmpty();
}


int main()
{
	string s;
	cout << "Enter a string of brackets: " ;
	getline(cin, s);
	if(isValid(s))
	    cout << "String is valid";
	else
	    cout << "String is invalid";

	return 0;
}
