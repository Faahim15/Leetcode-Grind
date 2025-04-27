#include <bits/stdc++.h>
using namespace std;
int main()
{
    int left = 0;
    vector<int> nums = {1, 0, 1, 1, 0, 1};
    int maxLen = 0;
    for (int right = 0; right < nums.size(); right++)
    {
        if (nums[right] != 1)
        {
            left = ++right;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    cout << maxLen << endl;
    return 0;
}
