#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {8, 2, 4, 7};
    deque<int> inc;
    deque<int> dec;
    int left = 0;
    int maxlen = 0;
    for (int right = 0; right < nums.size(); right++)
    {
        while (!dec.empty() && nums[right] > dec.back())
            dec.pop_back();
        dec.push_back(nums[right]);
        while (!inc.empty() && nums[right] < inc.back())
            inc.pop_back();
        inc.push_back(nums[right]);

        while (!dec.empty() && !inc.empty() && dec.front() - inc.front() > limit)
        {
            if (dec.front() == nums[left])
                dec.pop_front();
            if (inc.front() == nums[left])
                inc.pop_front();
            ++left;
        }
        maxlen = max(maxlen, right - left + 1);
    }
    cout << maxlen << endl;

    return 0;
}
