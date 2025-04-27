#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {9, 10, 9, -7, -4, -8, 2, -6};
    deque<pair<int, int>> dq;

    for (int i = 0; i < nums.size(); i++)
    {
        dq.push_back({nums[i], i});
    }
    int temp = 0;

    while (1)
    {
        int cur_front = dq.front().first;
        int cur_indx = dq.front().second;
        temp++;
        if (cur_indx == 3)
        {
            dq.pop_front();
            break;
        }
        dq.pop_front();
        dq.push_back({cur_front, cur_indx});
        }
    cout << temp << endl;
    while (temp--)
    {
        int cur_front = dq.front().first;
        int cur_indx = dq.front().second;
        dq.pop_front();
        dq.push_back({cur_front, cur_indx});
    }
    while (!dq.empty())
    {
        cout << dq.front().first << " ";
        dq.pop_front();
    }
    return 0;
}
