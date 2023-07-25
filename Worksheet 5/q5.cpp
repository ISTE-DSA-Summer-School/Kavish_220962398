//Convert Infix expression to Postfix expression

#include <iostream>
#include <string>

using namespace std;

class Stack {
private:
    static const int MAX_SIZE = 100;
    char a[MAX_SIZE];
    int top;

public:
    Stack() {
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
        } else {
            cout << "Cannot push " << value << ", stack is full." << endl;
        }
    }

    char pop() {
        if (!isEmpty()) {
            char value = a[top];
            top--;
            return value;
        } else {
            cout << "Cannot pop from an empty stack." << endl;
            return 0;
        }
    }

    char peek() {
        if (!isEmpty()) {
            return a[top];
        } else {
            cout << "Stack is empty, cannot get the top element." << endl;
            return -1;
        }
    }
};

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int getPrecedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    return 0;
}

string infixToPostfix(const string& infix) {
    string postfix;
    Stack operators;

    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        }
        else if (c == '(') {
            operators.push(c);
        }
        else if (c == ')') {
            while (!operators.isEmpty() && operators.peek() != '(') {
                postfix += operators.pop();
            }
            operators.pop();
        }
        else if (isOperator(c)) {
            while (!operators.isEmpty() && getPrecedence(operators.peek()) >= getPrecedence(c)) {
                postfix += operators.pop();
            }
            operators.push(c);
        }
    }

    while (!operators.isEmpty()) {
        postfix += operators.pop();
    }

    return postfix;
}

int main() {
    string infix = "A + B * C + D";
    string postfix = infixToPostfix(infix);
    cout << "Infix expression: " << infix << endl;
    cout << "Postfix expression: " << postfix << endl;
    return 0;
}
