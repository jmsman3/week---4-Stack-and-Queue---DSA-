#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int max_value = INT_MIN;
    int min_value = INT_MAX ; while (x--)
    {
        int n;
        cin >> n;
        if (n > max_value)
        {
            max_value = n;
        }
        else if (n < min_value)
        {
            min_value = n;
        }
    }
    cout << max_value << endl;
    cout << min_value << endl;
    return 0;
}