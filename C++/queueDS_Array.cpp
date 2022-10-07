/*
Queue - It stores a list of items in which an item can be inserted at
one end and removed from the other end only.

Here FIFO (First in First Out) principle is used.

Some OPERATIONS in queue are:
- enqueue(x): similar to push(x)
- dequeue(): similar to pop()
- peek(): returns the front value of the queue
- empty()

In stack, top pointer is there, but here two pointers are used, front and back.
*/

// Array Implementation of Queue

#include<iostream>
using namespace std;

#define n 20

class queue {
    int* arr;
    int front;
    int back;

    public:
    queue(){
        arr = new int(n);
        front = -1;
        back = -1;
    }

    void push(int x) {
        if(back == n-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        back++;
        arr[back] = x;

        if(front == -1){
            front++;
        }
    }

    void pop() {

        if(front == -1 || front>back){
            cout<<"No elements in queue"<<endl;
            return;
        }

        front++;
    }

    int peek() {
        if(front == -1 || front>back){
            cout<<"No elements in queue"<<endl;
            return -1;
        }

        return arr[front];
    }

    bool empty() {
        if(front == -1 || front>back){
            return true;
        }

        return false;
    }
};

int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.empty()<<endl;

    return 0;
}