#include <bits/stdc++.h>
using namespace std;
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
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int top() { return tail->val; }
    int size() { return sz; }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
    bool isEqual(myStack & otherStack)
    {
        while (!empty() && !otherStack.empty())
        {
            if (top() != otherStack.top())
            {
                return false;
            }
            pop();
            otherStack.pop();
        }
        return empty() && otherStack.empty();
    }
};

int main()
{
    int n, m;
    cin >> n;
    myStack st1;
    while (n--)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    cin >> m;
    myStack st2;
    while (m--)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    bool AreStackEqual = (st1.isEqual(st2));
    if (AreStackEqual)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}