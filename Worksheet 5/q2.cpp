//Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

#include <iostream>
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

        char pop() {
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

int water_trapped(int height[], int n){

    Stack st;
     int trapped_water = 0;

    for (int i = 0; i < n; i++) {
        while ((!st.isEmpty()) && (height[st.peek()] < height[i])) {

            int pop_height = height[st.peek()];
            st.pop();

            if (st.isEmpty())
                break;

            int distance = i - st.peek() - 1;
            int min_height = min(height[st.peek()], height[i])- pop_height;
            trapped_water += distance * min_height;
        }

        st.push(i);
    }
    return trapped_water;
}

int main()
{
    int n;
    cout<<"Enter the number of elements of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout << "Water trapped:" <<water_trapped(arr, n);

    return 0;
}
