#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1, 3, 5, 6};

    int l = 0;
    int r = nums.size() - 1;
    int mid = 0;
    bool flag = false;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (nums[mid] == 0)
        {
            flag = true;
            break;
        }
        else if (nums[mid] < 0)
            l = mid + 1;
        else
            r = mid - 1;
    }
    if (flag)
        cout << mid << endl;
    else
    {
        if (l == 0)
        {
            (r < 0) ? r = 0 : r = r;
            cout << r;
        }
        else
            cout << l << endl;
    }
    return 0;
}
