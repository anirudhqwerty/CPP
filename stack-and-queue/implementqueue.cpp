#include <iostream>
using namespace std;

#define SIZE 5

class Queue{
    int arr[SIZE];
    int front , rear;
public:
    Queue(){
        front = -1;
        rear = -1;
    }

    void enqueue(int x){
        if (rear == SIZE -1){
            cout<<"Queue Overflow!!"<<endl;

        }
        else{
            if (front == -1) front = 0;
            arr[++rear]=x;
            cout<< x << " enqueued"<<endl;
            
        }
    }

    void dequeue(){
        if(front == -1 || front >rear){
            cout<<"Queue Underflow"<<endl;
        }
        else {
            cout << arr[front++] << " dequeued\n";
        }
    }
    void peek() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
        } else {
            cout << "Front element is " << arr[front] << endl;
        }
    }

    
    bool isEmpty() {
        return (front == -1 || front > rear);
    }





};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.peek();

    q.dequeue();
    q.peek();
    return 0;
}