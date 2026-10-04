#include <iostream>
using namespace std;

class Queue{
    int q[5];
    int front, rear;
    int size;

public:
    Queue(){
        front = 0;
        rear = -1;
        size = 0;
    }

    void join(int token){
        if (size == 5){
            cout << "Error: Queue is full" << endl;
            return;
        }

        rear = (rear + 1) % 5;
        q[rear] = token;
        size++;

        cout << "Front:" << q[front] << endl;
    }

    void serve(){
        if (size == 0){
            cout << "Error: Queue is empty" << endl;
            return;
        }

        front = (front + 1) % 5;
        size--;

        if(size > 0)
            cout << "Front:" << q[front] << endl;
        else
            cout << "Queue is empty" << endl;
    }
};

int main(){
    Queue q;

    q.join(101);
    q.join(102);
    q.join(103);

    q.serve();
    q.serve();

    q.join(104);
    q.join(105);

    return 0;
}