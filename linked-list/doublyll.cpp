#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyList {
    Node* head;
    Node* tail;

public:
    DoublyList() {
        head = tail = NULL;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void pop_front() {
        if (head == NULL) return;
        Node* temp = head;
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        else
            tail = NULL;
        delete temp;
    }

    void pop_back() {
        if (head == NULL) return;
        Node* temp = tail;
        tail = tail->prev;
        if (tail != NULL)
            tail->next = NULL;
        else
            head = NULL;
        delete temp;
    }

    void insert_at(int pos, int val) {
        if (pos == 1) {
            push_front(val);
            return;
        }
        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL) return;

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != NULL)
            temp->next->prev = newNode;
        else
            tail = newNode;

        temp->next = newNode;
    }

    void delete_at(int pos) {
        if (head == NULL) return;
        if (pos == 1) {
            pop_front();
            return;
        }

        Node* temp = head;
        for (int i = 1; i < pos && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL) return;

        if (temp->prev != NULL)
            temp->prev->next = temp->next;
        if (temp->next != NULL)
            temp->next->prev = temp->prev;
        else
            tail = temp->prev;

        delete temp;
    }

    void reverse() {
        Node* temp = NULL;
        Node* current = head;
        tail = head;

        while (current != NULL) {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }

        if (temp != NULL)
            head = temp->prev;
    }

    void print_forward() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void print_backward() {
        Node* temp = tail;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main() {
    DoublyList dll;

    dll.push_back(10);
    dll.push_back(20);
    dll.push_back(30);
    dll.push_front(5);
    dll.insert_at(3, 15);

    cout << "Forward: ";
    dll.print_forward();

    cout << "Backward: ";
    dll.print_backward();

    dll.delete_at(3); // delete 15
    cout << "\nAfter deleting position 3:\nForward: ";
    dll.print_forward();
    cout << "Backward: ";
    dll.print_backward();

    dll.reverse();
    cout << "\nAfter reversing:\nForward: ";
    dll.print_forward();
    cout << "Backward: ";
    dll.print_backward();

    return 0;
}
