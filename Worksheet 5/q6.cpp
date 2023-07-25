//Write a program to delete the middle element from a stack

#include <iostream>
#include<vector>
using namespace std;

class Stack{

    private:

        static const int MAX_SIZE = 100;
        int a[MAX_SIZE];
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
        void push(int value) {
            if (!isFull()) {
                top++;
                a[top] = value;
            }
            else {
                cout << "Cannot push " <<", stack is full." << endl;
            }
        }

        int pop() {
            if (!isEmpty()) {
                int value = a[top];
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

int main()
{
	vector<int> a;
	int n;
	cout<<"Enter the number of elements:";
	cin>>n;

	cout<<"Enter the elements:"<<endl;
	for(int i=0;i<n;i++){
        int num;
        cin>>num;
        a.push_back(num);
	}

	int size=0;
    Stack stack;

    for (int c : a) {
        stack.push(c);
        size ++;
    }

    if(size%2==0){
        cout<<"No middle element";
        return 0;
    }

    int middle = size / 2;
    Stack temp_stack;

    for (int i = 0; i < middle; i++) {
        temp_stack.push(stack.peek());
        stack.pop();
    }

    stack.pop();

    while (!temp_stack.isEmpty()) {
        stack.push(temp_stack.peek());
        temp_stack.pop();
    }

    Stack stack2;
    while (!stack.isEmpty()) {
        stack2.push(stack.pop());
    }
    cout<<"stack after removing middle element:";
     while (!stack2.isEmpty()) {
        cout << stack2.pop() << " ";
    }

	return 0;
}
