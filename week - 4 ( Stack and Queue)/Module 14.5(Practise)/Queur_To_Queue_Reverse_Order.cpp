#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> st;
    queue<int> q;
    while (n--)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}