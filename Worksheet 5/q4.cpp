//Given two strings s and t, return true if they are equal when both are typed into empty text editors.
//'#'means a backspace character.Note that after backspacing an empty text, the text will continue empty.

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

        char peek() {
            if (!isEmpty()) {
                return a[top];
            }
            else {
                cout << "Stack is empty, cannot get the top element." << endl;
                return -1;
            }
        }
};

bool IsEqual(string str1,string str2){

    Stack s1;
    Stack s2;

    for (char c:str1){
        if(c!= '#'){
            s1.push(c);
        }
        else if (!s1.isEmpty()){
            s1.pop();
        }
    }

    for (char c:str2){
        if(c!= '#'){
            s2.push(c);
        }
        else if (!s2.isEmpty()){
            s2.pop();
        }
    }
    string new_str1,new_str2;
    while (!s1.isEmpty()) {
        new_str1 += s1.pop();
    }
    while (!s2.isEmpty()) {
        new_str2 += s2.pop();
    }

    if(new_str1.compare(new_str2)==0){
        return true;
    }
    else return false;
}

int main()
{
    string str1,str2;
    cout<<"Enter string 1:";
    getline(cin,str1);
    cout<<"Enter string 2:";
    getline(cin,str2);

    cout<<boolalpha<<IsEqual(str1,str2);
}





