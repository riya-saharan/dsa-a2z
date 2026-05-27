class Node
{
public:
    int value : Node *next;
    // one parametrized constructor
    Node(int x)
    {
        value = x;
        next = NULL;
    }
};
class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
};
adding at the beginning of the linked list void addAtBeginning(int x)
{
    Node *newNode = new Node(x);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
// Node* newNode = new Node(x); what does it mean?
//  it means we are creating a new node and allocating memory for it in the heap and assignin
void addfirst(int x)
{
    Node *newNode = new Node(x);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void output()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
}
;
int main()
{
    LinkedList list;
    list.addAtBeginning(10);
    list.addAtBeginning(20);
    list.addAtBeginning(30);
    list.output();
    return 0;
}
add after the end of the linked list void addAtEnd(int x)
{
    Node *newNode = new Node(x);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
// delete a node from the linked list
void deleteNode(int x)
{
    if (head == NULL)
        return;
    if (head->value == x)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL && temp->next->value != x)
    {
        temp = temp->next;
    }
    if (temp->next != NULL)
    {
        Node *nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }
}
// delete after a given node
void deleteAfter(int x)
{
    if (head == NULL)
        return;
    Node *temp = head;
    while (temp != NULL && temp->value != x)
    {
        temp = temp->next;
    }
    if (temp != NULL && temp->next != NULL)
    {
        Node *nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }
}
explain revese a linked list
    To reverse a linked list,
    we need to change the direction of the pointers in the linked list.We can do this by iterating through the linked list and changing the next pointer of each node to point to the previous node.We also need to keep track of the previous node and the current node while iterating through the linked list.Finally, we need to update the head pointer to point to the new head of the reversed linked list.
                                                                                                                                                                                                                                                                                                                          // doubly linked list
                                                                                                                                                                                                                                                                                                                          class Node
{
public:
    int value;
    Node *next;
    Node(int x)
    {
        value = x;
        next = NULL;
    }
};
class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
};

explain how to reverse a circular linked list To reverse a circular linked list, we can use a similar approach to reversing a regular linked list, but we need to take into account the circular nature of the list.We can iterate through the circular linked list and change the next pointer of each node to point to the previous node.We also need to keep track of the previous node and the current node while iterating through the circular linked list.Finally, we need to update the head pointer to point to the new head of the reversed circular linked list, which will be the last node in the original circular linked list.

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            reverse a circular linked list void
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            reverseCircularLinkedList()
{
    if (head == NULL || head->next == head)
        return;

    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;

    do
    {
        next = current->next; // Store the next node
        current->next = prev; // Reverse the current node's pointer
        prev = current;       // Move prev to the current node
        current = next;       // Move to the next node
    } while (current != head); // Continue until we have traversed the entire circular linked list

    head->next = prev; // Update the last node's next pointer to point to the new head
    head = prev;       // Update the head pointer to point to the new head of the reversed circular linked list
}

reverse a doubly circular LinkedList void reverseDoublyCircularLinkedList()
{
    if (head == NULL || head->next == head)
        return;

    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;

    do
    {
        next = current->next; // Store the next node
        current->next = prev; // Reverse the current node's next pointer
        current->prev = next; // Reverse the current node's prev pointer
        prev = current;       // Move prev to the current node
        current = next;       // Move to the next node
    } while (current != head); // Continue until we have traversed the entire doubly circular linked list

    head->next = prev; // Update the last node's next pointer to point to the new head
    head->prev = prev; // Update the last node's prev pointer to point to the new head
    head = prev;       // Update the head pointer to point to the new head of the reversed doubly circular linked list
}

Linkedlist all most important problems and their solutions

    exaplain all arrays problems 1. Find the maximum and minimum element in an array : This problem involves iterating through the array and keeping track of the maximum and minimum values encountered.The time complexity of this problem is
                                                                                       O(n)
since we need to traverse the entire array once.2. Reverse an array : This problem involves swapping elements from the start and end of the array until we reach the middle.The time complexity of this problem is O(n)
since we need to traverse the entire array once.3. Rotate an array : This problem involves shifting elements of the array to the left or right by a given number of positions.The time complexity of this problem is O(n)
since we need to traverse the entire array once.4. Find the second largest element in an array : This problem involves iterating through the array and keeping track of the largest and second largest values encountered.The time complexity of this problem is O(n)
since we need to traverse the entire array once.5. Remove duplicates from an array : This problem involves iterating through the array and keeping track of the unique elements encountered.We can use a hash set to store the unique elements and then create a new array with only the unique elements.The time complexity of this problem is O(n)
since we need to traverse the entire array once.6. Find the missing number in an array : This problem involves calculating the sum of the first n natural numbers and then subtracting the sum of the elements in the array from it.The time complexity of this problem is O(n)
since we need to traverse the entire array once.7. Find the majority element in an array : This problem involves iterating through the array and keeping track of the count of each element.We can use a hash map to store the count of each element and then find the element with the highest count.The time complexity of this problem is O(n)
since we need to traverse the entire array once.8. Find the intersection of two arrays : This problem involves iterating through both arrays and keeping

                                                                                             stack operations 1. Push : This operation adds an element to the top of the stack.The time complexity of this operation is O(1) since we are adding an element to the top of the stack.2. Pop : This operation removes the top element from the stack.The time complexity of this operation is O(1) since we are removing an element from the top of the stack.3. Peek : This operation returns the top element of the stack without removing it.The time complexity of this operation is O(1) since we are accessing the top element of the stack.4. IsEmpty : This operation checks if the stack is empty.The time complexity of this operation is O(1) since we are checking if the stack is empty
    or not.

           stack overflow
           and underflow Stack overflow occurs when we try to push an element onto a stack that is already full.This can lead to memory corruption and program crashes.To prevent stack overflow,
    we can implement a check before pushing an element onto the stack to ensure that there is enough space available.Stack underflow occurs when we try to pop an element from an empty stack.This can also lead to memory corruption and program crashes.To prevent stack underflow, we can implement a check before popping an element from the stack to ensure that the stack is not empty.MAXSTK is a constant that defines the maximum size of the stack.In this implementation, we have defined MAXSTK as 5, which means that the stack can hold a maximum of 5 elements.If we try to push an element onto the stack when it is already full(i.e., when top is equal to MAXSTK - 1), we will get a stack overflow error.

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           stack implementation using arrays
#include <iostream>
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           using namespace std;
#define MAXSTK 5
class stack
{
    int data[MAXSTK];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(int element)
    {
        if (top == MAXSTK - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        data[++top] = element;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        top--;
    }
    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Top element: " << data[top] << endl;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    int size()
    {
        return top + 1;
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60); // This will cause stack overflow
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.pop();
    s.pop();
    s.pop(); // This will cause stack underflow
    return 0;
}