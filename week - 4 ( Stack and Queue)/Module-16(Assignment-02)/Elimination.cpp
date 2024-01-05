#include <bits/stdc++.h>
using namespace std;
bool Lets_Eliminate_EMPTY_Check(string S)
{
    stack<char> st;
    for (char c : S)
    {
        if (c == '1')
        {
            if (!st.empty() && st.top() == '0')
            {
                st.pop();
            }
            else
            {
                st.push('1');
            }
        }
        else
        {
            st.push('0');
        }
    }

    return st.empty();
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (Lets_Eliminate_EMPTY_Check(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}