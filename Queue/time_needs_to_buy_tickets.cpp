#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<pair<int, int>> q;
    vector<int> tickets = {5, 1, 1, 1};
    int k = 0;
    int timeCounter = 0;
    for (int i = 0; i < tickets.size(); i++)
    {
        q.push({tickets[i], i});
    }
    while (!q.empty())
    {
        int counter = q.front().first;
        int idx = q.front().second;
        q.pop();
        if (counter > 0)
        {
            counter--;
            timeCounter++;
        }
        if (idx == k && counter == 0)
            break;
        if (counter)
            q.push({counter, idx});
    }
    cout << timeCounter;
    return 0;
}
