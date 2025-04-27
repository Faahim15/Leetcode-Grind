#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {9, 10, 9, -7, -4, -8, 2, -6};
    int k = 5;
    deque<pair<int, int>> dq;
    vector<int> ans;

    for (int right = 0; right < nums.size(); right++)
    {
        // Remove smaller elements from back
        while (!dq.empty() && dq.back().first < nums[right])
            dq.pop_back();

        dq.push_back({nums[right], right});

        if (!dq.empty() && dq.front().second <= right - k)
            dq.pop_front();

        if (right >= k - 1)
            ans.push_back(dq.front().first);
    }

    for (int num : ans)
        cout << num << " ";

    return 0;
}
