linear queue
added at the end and removed from the front
dont we add elements at front and remove from the end in a queue
no we add elements at the end and remove from the front in a queue
give code for queue implementation using arrays
#include <iostream>
#define MAX 100
using namespace std;
class queue
{
    int data[MAX];
    int front, rear;

public:
    queue() : front(-1), rear(-1) {}
    void addQueue(int ele)
    {
        if (rear == MAX - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        rear++;
        data[rear] = ele;
        if (front == -1)
        {
            front = 0;
        }
        void deleteQueue()
        {
            if (front == -1 || front > rear)
            {
                cout << "Queue underflow" << endl;
                return;
            }
            front++;
        }
        bool isEmpty()
        {
            return front == -1 || front > rear;
        }
        int frontElement()
        {
            if (isEmpty())
            {
                cout << "Queue is empty" << endl;
                return -1; // or throw an exception
            }
            return data[front];
        }
        int rearElement()
        {
            if (isEmpty())
            {
                cout << "Queue is empty" << endl;
                return -1; // or throw an exception
            }
            return data[rear];
        }
    }
};
int main()
{
    queue q;
    q.addQueue(10);
    q.addQueue(20);
    q.addQueue(30);
    q.addQueue(40);
    q.addQueue(50);
    cout << "Front element: " << q.frontElement() << endl;
    cout << "Rear element: " << q.rearElement() << endl;
    q.deleteQueue();
    cout << "Front element after deletion: " << q.frontElement() << endl;
    return 0;
}

implement circular queue using arrays
#include <iostream>
#define MAX 100
    using namespace std;

class circularQueue
{
    int data[MAX];
    int front, rear;

public:
    circularQueue() : front(-1), rear(-1) {}

    void enqueue(int value)
    {
        if ((rear + 1) % MAX == front)
        {
            cout << "Queue is full" << endl;
            return;
        }
        if (front == -1)
        {
            front = 0;
        }
        rear = (rear + 1) % MAX;
        data[rear] = value;
    }

    int dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int value = data[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }
        return value;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (rear + 1) % MAX == front;
    }
};

int main()
{
    circularQueue cq;
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cout << "Dequeued element: " << cq.dequeue() << endl;
    cq.enqueue(40);
    cout << "Dequeued element: " << cq.dequeue() << endl;
    return 0;
}

queue definition
    A queue is a linear data structure that follows the First In First
    Out(FIFO) principle.Elements are added at the rear and removed from the front.Double ended queue(deque) is a linear data structure that allows insertion and deletion at both ends. It can be used as both a queue and a stack.
explain all topics related to queue
1. Queue Implementation using Arrays: A queue can be implemented using a fixed-size array. The front and rear pointers are used to keep track of the elements in the queue. The rear pointer is incremented when an element is added, and the front pointer is incremented when an element is removed. This implementation has a time complexity of O(1) for both enqueue and dequeue operations, but it can lead to inefficient use of space if the queue becomes full.
2. Circular Queue: A circular queue is an improvement over the linear queue implementation using arrays. In a circular queue, the rear pointer wraps around to the beginning of the array when it reaches the end. This allows for efficient use of space and prevents the issue of queue overflow when the rear pointer reaches the end of the array. The time complexity for enqueue and dequeue operations remains O(1).
3. Queue Implementation using Linked List: A queue can also be implemented using a linked list. In this implementation, each node contains a data value and a pointer to the next node. The front pointer points to the first node in the queue, and the rear pointer points to the last node. Enqueue operations involve adding a new node at the rear, while dequeue operations involve removing the node at the front. This implementation allows for dynamic memory allocation and can grow or shrink as needed, but it has a time complexity of O(1) for both enqueue and dequeue operations.
4. Double Ended Queue (Deque): A deque is a linear data structure that allows insertion and deletion at both ends. It can be implemented using arrays or linked lists. In a deque, elements can be added or removed from both the front and rear ends. This makes it a versatile data structure that can be used as both a queue and a stack. The time complexity for insertion and deletion operations in a deque is O(1) for both ends.
