#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;   
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop_front() {
        if (head == NULL) return;

        Node* temp = head;
        head = head->next;
        if (head == NULL) tail = NULL;
        delete temp;
    }

    void pop_back() {
        if (head == NULL) return;

        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }

    void insert_at(int pos, int val) {
        if (pos == 1) {
            push_front(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) return;

        newNode->next = temp->next;
        temp->next = newNode;

        if (newNode->next == NULL) {
            tail = newNode;
        }
    }

    void delete_at(int pos) {
        if (head == NULL) return;

        if (pos == 1) {
            Node* toDelete = head;
            head = head->next;
            if (head == NULL) tail = NULL;
            delete toDelete;
            return;
        }

        Node* prev = head;
        for (int i = 1; i < pos - 1 && prev != NULL; i++) {
            prev = prev->next;
        }

        if (prev == NULL || prev->next == NULL) return;

        Node* toDelete = prev->next;
        prev->next = toDelete->next;


        if (toDelete == tail) tail = prev;
        delete toDelete;
    }

    int length(){
        int count =0;
        Node* temp = head;
        while (temp!=NULL)
        {
            temp = temp ->next;
            count++;
        }
        
        return count;
    }


    int search(int val) {
        int pos = 1;
        Node* temp = head;

        while (temp != NULL) {
            if (temp->data == val) {
                cout << "Found at position " << pos << endl;
                return pos;
            }
            temp = temp->next;
            pos++;
        }

        cout << "Not found!!" << endl;
        return -1;
    }


    void print_ll() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    List ll;
    int n=5;
    for (int i = 1; i <= n; i++)
    {
        ll.push_back(i);
    }
    

    // ll.insert_at(3, 99);  
    // ll.delete_at(2);
    // ll.pop_back();
    // ll.pop_front();

    int number;


    ll.print_ll();

    cout<<ll.length();

    return 0;
}
