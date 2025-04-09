#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 0;
    int rotate = nums.size() - k;
    vector<int> copy;
    copy = nums;
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        if (i < k)
            nums[i] = copy[rotate++];
        else
        {
            nums[i] = copy[j];
            j++;

            if (j == nums.size() - k)
            {
                break;
            }
        }
    }

    // int j = 0;

    // for (int i = k; i < nums.size(); i++)
    // {
    //     nums[i] = copy[j];
    //     j++;

    //     if (j == nums.size() - k)
    //     {
    //         break;
    //     }
    // }
    for (int v : nums)
        cout << v << " ";

    return 0;
}
