#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void reverseQueue(queue<int>& MyQueue) {
    stack<int> MyStack;
    while (!MyQueue.empty()) {
        MyStack.push(MyQueue.front());
        MyQueue.pop();
    }

    while (!MyStack.empty()) {
        MyQueue.push(MyStack.top());
        MyStack.pop();
    }
}

int main() {
    queue<int> MyQueue;

    
    MyQueue.push(1);
    MyQueue.push(2);
    MyQueue.push(3);
    MyQueue.push(4);

    
    reverseQueue(MyQueue);

    
    cout << "Reversed queue: ";
    while (!MyQueue.empty()) {
        cout << MyQueue.front() << " ";
        MyQueue.pop();
    }

    return 0;
}