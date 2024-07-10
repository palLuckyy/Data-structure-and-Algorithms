#include<iostream>
#include<Stack>
using namespace std;
class Stack {
    public:
    int *arr;
    int top;
    int size;
    Stack (int size) {
        this-> size = size;
        top = -1;
        arr = new int[size];
    }
    void push(int element) {
        if(size - top > 1) {
            top++;
            arr[top] = element;
        }
        else 
        {
            cout << "stack overflow: " << endl;
        }
    }
    void pop() {
        if(top >= 0) {
            top--;
        }
        else
        {
            cout << "stack underflow: " << endl;
        }
    }
    int peek() {
        if( top >= 0) {
            return arr[top];
        }
        else
        {
            cout << "stack is empty: " << endl;
            return -1;
        }
    }
    bool isEmpty() {
        if ( top == -1) {
            return true;
        }
        else 
        {
            return false;
        }
    }
};
int main() {
    Stack st(5);

    st.push(36);
    st.push(65);
    st.push(85);
    st.push(19);
    st.push(55);
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;

    if(st.isEmpty()) {
        cout<< "Stack is empty: " << endl;
    }
    else 
    {
        cout << "Stack is not empty: " << endl;
    }
    cout << "size os stack is: " << st.size << endl;

}