#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int l = 0;
    int r = nums.size() - 1;
    int mid;
    vector<int> ans;
    bool flag = false;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (nums[mid] == target)
        {
            flag = true;
            break;
        }
        else if (nums[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    if (flag)
    {
        if (nums[l] == target && nums[r] != target)
            ans = {l, mid};
        else if (nums[l] == target && nums[mid] == target && nums[r] == target)
            ans = {l,
                   r};
        else if (nums[l] != target && nums[r] != target)
            ans = {mid, mid};
        else
            ans = {mid,
                   r};
    }
    else
        ans = {-1, -1};

    return 0;
}
