#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {-1, 1, 0, -3, 3};
    int n = nums.size();
    vector<int> prefix(n);
    vector<int> sufix(n);
    prefix[0] = nums[0];
    sufix[0] = nums[--n];

    for (int i = 1; i < nums.size(); i++)
    {
        prefix[i] = nums[i] * prefix[i - 1];
        sufix[i] = sufix[i - 1] * nums[--n];
    }
    reverse(sufix.begin(), sufix.end());
    nums[0] = sufix[1];
    nums[nums.size() - 1] = prefix[nums.size() - 2];
    for (int i = 1; i < nums.size() - 1; i++)
    {
        nums[i] = sufix[i + 1] * prefix[i - 1];
    }
    for (int p : nums)
        cout << p << " ";

    return 0;
}
