#include <bits/stdc++.h>
using namespace std;

bool Same_Order(stack<int> &st, queue<int> &q)
{
    while (!st.empty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            return false;
        }
        st.pop();
        q.pop();
    }
    return st.empty() && q.empty();
}

int main()
{
    int n, m;
    cin >> n;
    stack<int> st;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> m;
    queue<int> q;
    while (m--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    if (Same_Order(st, q))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}