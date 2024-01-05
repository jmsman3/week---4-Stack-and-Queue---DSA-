#include <iostream>
using namespace std;

// Node class for a doubly linked list
class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Custom stack class using a doubly linked list
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    // Push operation to add a new element to the top of the stack
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            // If the stack is empty, set both head and tail to the new node
            head = tail = newNode;
            return;
        }

        // Link the new node to the previous tail and update the tail
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }

    // Pop operation to remove the element from the top of the stack
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            // If the stack becomes empty after pop, update the head to NULL
            head = NULL;
        }
        else
        {
            // Otherwise, update the next pointer of the new tail to NULL
            tail->next = NULL;
        }
        delete deleteNode;
    }

    // Top operation to retrieve the element at the top of the stack
    int top()
    {
        return tail->val;
    }

    // Size operation to get the current size of the stack
    int size()
    {
        return sz;
    }

    // Empty operation to check if the stack is empty
    bool empty()
    {
        return sz == 0;
    }

    // Function to check if two stacks are equal
    bool isEqual(myStack &otherStack)
    {
        while (!empty() && !otherStack.empty())
        {
            // Compare the top elements of both stacks
            if (top() != otherStack.top())
            {
                return false; // If any elements are different, stacks are not equal
            }
            pop();
            otherStack.pop();
        }
        return empty() && otherStack.empty(); // Stacks are equal if both are empty at this point
    }
};

int main()
{
    int n, m;
    cin >> n;
    myStack stack1;
    // Input elements into the first stack
    while (n--)
    {
        int x;
        cin >> x;
        stack1.push(x);
    }

    cin >> m;
    myStack stack2;
    // Input elements into the second stack
    while (m--)
    {
        int x;
        cin >> x;
        stack2.push(x);
    }

    // Check if the two stacks are equal and print the result
    // Check if the two stacks are equal
    bool areStacksEqual = stack1.isEqual(stack2);

    // Print the result based on the boolean variable
    if (areStacksEqual)
    {
        cout << "The stacks are equal." << endl;
    }
    else
    {
        cout << "The stacks are not equal." << endl;
    }

    return 0;
}
