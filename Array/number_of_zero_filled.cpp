#include <bits/stdc++.h>
using namespace std;
int main()
{
    int zero = 0;
    int cnt = 0;

    vector<int> nums = {0, 0, 0, 0, 2, 0, 0};
    for (int i = 0; i < nums.size(); i++)
    {

        if (i == nums.size() - 1)
            break;
        if (!nums[i] && !nums[++i])
        {
            zero += 3;
            while (!nums[++i])
            {
                zero += 3;
            }
        }
    }
    cout << zero;

    return 0;
}
