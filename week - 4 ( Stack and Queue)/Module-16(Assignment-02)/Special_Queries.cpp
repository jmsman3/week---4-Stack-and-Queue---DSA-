#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    queue<string> TicketSerial;

    while (q--)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            string name;
            cin >> name;
            TicketSerial.push(name);
        }
        else if (command == 1)
        {
            if (!TicketSerial.empty())
            {
                cout << TicketSerial.front() << endl;
                TicketSerial.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}