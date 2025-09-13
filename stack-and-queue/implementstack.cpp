#include <iostream>
using namespace std;

#define SIZE 5

class Stack{
    int arr[SIZE];
    int top;

public:
    Stack(){

        top=-1;
    }
    void push(int x){
        if(top==SIZE -1){
            cout<<"Stack overflow1"<<endl;
        }
        else{
            top=top+1;
            arr[top]=x;
            cout << x <<" pushed into stack"<<endl;
        }
    }

    void pop(){
        if(top== -1){
            cout<<"Stack underflow!";
        }
        else{
            cout<<arr[top]<<" popped from stack"<<endl;
            top=top-1;
        }
    }

    void peek(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
        }
        else{
            cout<<"Top element is "<<arr[top]<<endl;
        }
    }

    bool isEmpty(){
        return (top== -1);
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.peek();

    s.pop();
    s.peek();

    return 0;
}