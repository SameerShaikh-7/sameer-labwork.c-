#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) 
    {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insertAtStart(int val) {
        Node* node = new Node(val);
        node->next = head;
        head = node;
        cout << "Added to the list" << endl;
    }

    void displayList() {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }
      
        Node* temp = head;
        while (temp) {
            cout << temp->data;
            if (temp->next) cout << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void deleteAtPosition(int index) {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }

        if (index == 0) {
            Node* del = head;
            head = head->next;
            delete del;
            cout << "Removed first element" << endl;
            return;
        }

        Node* prev = nullptr;
        Node* curr = head;
        int count = 0;

        while (curr && count < index) {
            prev = curr;
            curr = curr->next;
            count++;
        }

        if (!curr) {
            cout << "Invalid position" << endl;
            return;
        }

        prev->next = curr->next;
        delete curr;
        cout << "Node removed " << endl;
    }

    void reverseList() {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }

        Node* prev = nullptr;
        Node* curr = head;
        Node* nextNode = nullptr;

        while (curr) {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        head = prev;
        cout << "List reversed" << endl;
    }

    void findAtPosition(int index) {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        int count = 0;

        while (temp) {
            if (count == index) {
                cout << "Element at position " << index << ": " << temp->data << endl;
                return;
            }
            temp = temp->next;
            count++;
        }

        cout << "Position " << index << " out of range." << endl;
    }
};
