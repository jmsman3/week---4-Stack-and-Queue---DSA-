#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack<int> main_stack;
    stack<int> copy_stack;
    while (n--)
    {
        int x;
        cin >> x;
        main_stack.push(x);
    }

    while (!main_stack.empty())
    {
        copy_stack.push(main_stack.top());
        main_stack.pop();
    }
    while (!copy_stack.empty())
    {
        cout << copy_stack.top() << " ";
        copy_stack.pop();
    }

    return 0;
}