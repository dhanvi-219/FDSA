#include <iostream>
using namespace std;

struct Node {
    string patient;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void arrive(string name) {
    Node* newNode = new Node;

    newNode->patient = name;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }

    cout << "Front patient: " << front->patient << endl;
}

void attend() {
    if (front == NULL) {
        cout << "Error: Ward is empty" << endl;
        return;
    }

    Node* temp = front;
    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    delete temp;

    if (front != NULL)
        cout << "Front patient: " << front->patient << endl;
    else
        cout << "Ward is empty" << endl;
}

int main() {

    arrive("Patient1");
    arrive("Patient2");
    arrive("Patient3");

    attend();
    attend();
    attend();

    return 0;
}