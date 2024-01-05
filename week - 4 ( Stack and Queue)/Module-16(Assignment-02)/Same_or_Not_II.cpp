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

class MyStack
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
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

class MyQueue
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
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
bool Check_Stack_Q_same_or_Not(stack<int> &N, queue<int> &M)
{
    while (!N.empty() && !M.empty())
    {
        if (N.top() != M.front())
        {
            return false;
        }
        N.pop();
        M.pop();
    }
    return N.empty() && M.empty();
}

int main()
{

    int n, m;
    cin >> n >> m;
    stack<int> stackk;
    queue<int> q;
    while (n--)
    {
        int x;
        cin >> x;
        stackk.push(x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (Check_Stack_Q_same_or_Not(stackk, q))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;

    return 0;
}