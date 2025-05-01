#include <bits/stdc++.h>
using namespace std;

int find_left_position(vector<int> nums, int target)
{
    int l = 0;
    int r = nums.size() - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        while (nums[mid] == target)
        {
            mid--;
            if (!mid)
                return mid;
            else if (nums[mid] < target && nums[mid + 1] == target)
                return mid + 1;
        }
        if (nums[mid] < target)
            l = mid + 1;
        else if (nums[mid] > target)
            r = mid - 1;
    }
    return -1;
}

int find_right_position(vector<int> nums, int target)
{
    int l = 0;
    int r = nums.size() - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        while (nums[mid] == target)
        {
            mid++;
            if (mid == nums.size() - 1)
                return mid;
            else if (nums[mid] > target && nums[mid - 1] == target)
                return mid - 1;
        }
        if (nums[mid] < target)
            l = mid + 1;
        else if (nums[mid] > target)
            r = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 3, 3, 3, 4, 5, 6};
    int target = 3;
    int left = find_left_position(nums, target);
    int right = find_right_position(nums, target);
    cout << left << " " << right;

    return 0;
}
