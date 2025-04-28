#include <iostream>
#include <vector>
#include <stack>
#include <limits.h>

bool find132pattern(std::vector<int> &nums)
{
    if (nums.size() < 3)
        return false;

    int third = INT_MIN;
    std::stack<int> st;

    for (int i = nums.size() - 1; i >= 0; i--)
    {

        if (nums[i] < third)
        {
            return true;
        }

        while (!st.empty() && nums[i] > st.top())
        {
            third = st.top();
            st.pop();
        }

        st.push(nums[i]);
    }

    return false;
}

int main()
{
    std::vector<int> nums = {1, 2, 3, 4}; // Example input
    std::cout << (find132pattern(nums) ? "Pattern found" : "No pattern") << std::endl;
    return 0;
}