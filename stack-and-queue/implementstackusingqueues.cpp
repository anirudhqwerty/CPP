#include <iostream>
#include<queue>
using namespace std;


class Stack{
    queue<int> q1, q2;

public:
    void push(int x){
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1,q2);

        cout<<"pushed"<<endl;
    }

    void pop(){
        if (q1.empty()) {
            cout << "Stack is empty!\n";
            return;
        }
        else{
        cout << q1.front() << " popped\n";
        q1.pop();
        }
    }

    void top() {
        if (q1.empty()) {
            cout << "Stack is empty!\n";
            return;
        }
        cout << "Top element: " << q1.front() << endl;
    }

};

int main() {
    Stack s;
    s.push(10);   // books: [10]
    s.push(20);   // books: [20, 10]
    s.push(30);   // books: [30, 20, 10]

    s.top();      // shows 30
    s.pop();      // removes 30
    s.top();      // shows 20
    return 0;
}