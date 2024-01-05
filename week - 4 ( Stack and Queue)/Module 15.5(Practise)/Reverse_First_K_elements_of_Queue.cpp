#include <queue>
#include <stack>

queue<int> reverseElements(queue<int> q, int k) {
    stack<int> tempStack;

    for( int i= 0 ; i<k; i++)
    {
        tempStack.push( q.front());
        q.pop();
    }

    while( !tempStack.empty())
    {
        q.push( tempStack.top());
        tempStack.pop();
    }

    int sz = q.size();

    for( int i = 0 ; i< sz - k; i++)
    {
        q.push(q.front());
        q.pop();
    }
    return q;
}
