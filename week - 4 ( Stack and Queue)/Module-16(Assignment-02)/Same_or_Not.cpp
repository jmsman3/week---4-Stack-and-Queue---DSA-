#include <bits/stdc++.h>
using namespace std;
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
}