#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums1 = {2, 4};
    vector<int> nums2 = {1, 2, 3, 4};
    stack<int> st;
    vector<int> indx;
    reverse(nums2.begin(), nums2.end());
    for (int i = 0; i < nums2.size(); i++)
    {
        if (st.empty())
        {
            st.push(nums2[i]);
            indx.push_back(-1);
        }
        else if (st.top() > nums2[i])
        {
            indx.push_back(i);
        }
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> nums1 = {2, 4};
//     vector<int> nums2 = {1, 2, 3, 4};
//     vector<int> ans;

//     for (int i = 0; i < nums1.size(); i++)
//     {
//         bool found = false;
//         bool pushed = false;
//         for (int j = 0; j < nums2.size(); j++)
//         {
//             if (nums1[i] == nums2[j])
//                 found = true;
//             else if (found && nums2[j] > nums1[i])
//             {
//                 ans.push_back(nums2[j]);
//                 pushed = true;
//                 break;
//             }
//         }
//         if (!pushed)
//             ans.push_back(-1);
//     }

//     // Output result
//     for (int x : ans)
//         cout << x << " ";
//     cout << endl;

//     return 0;
// }
