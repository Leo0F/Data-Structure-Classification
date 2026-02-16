#include <iostream>
using namespace std;
const int MAX = 5;
int q[MAX];
int front = -1;
int rear = -1;
void enqueue(int val) {
    if (rear == MAX - 1) {
        cout << "Queue Overflow!\n";
        return;
    }
    if (front == -1) front = 0;
    q[++rear] = val;
    cout << val << " enqueued\n";
void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow!\n";
        return;
    }
    cout << q[front] << " dequeued\n";
    front++;
    if (front > rear) {
        front = -1;
        rear = -1;
    }
}
void show() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Queue: ";
    for (int i = front; i <= rear; i++) {
        cout << q[i] << " ";
    }
    cout << "\n";
}
int main() {
    enqueue(10);
    enqueue(25);
    enqueue(7);
    show();
    dequeue();
    show();
    dequeue();
    show();
    enqueue(99);
    show();
    return 0;
}