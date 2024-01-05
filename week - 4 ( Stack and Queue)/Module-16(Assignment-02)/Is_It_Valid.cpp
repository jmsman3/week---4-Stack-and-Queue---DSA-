#include <bits/stdc++.h>
using namespace std;

string IsItValidd_Check(string s)
{
    int cnt_1 = 0;
    int cnt_2 = 0;
    for (char c : s)
    {
        if (c == '0')
        {
            if (cnt_1 > 0)
            {
                cnt_1--;
            }
            else
            {
                cnt_2++;
            }
        }
        else if (c == '1')
        {
            if (cnt_2 > 0)
            {
                cnt_2--;
            }
            else
            {
                cnt_1++;
            }
        }
    }
    if (cnt_1 == 0 && cnt_2 == 0)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}
int main()
{

    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        string S;
        cin >> S;
        cout << IsItValidd_Check(S) << endl;
    }

    return 0;
}