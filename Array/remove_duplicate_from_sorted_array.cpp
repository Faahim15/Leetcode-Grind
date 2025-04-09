#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1};
    int indx = 0;
    int j = 0;

    if (nums.size() == 1)
    {
        indx++;
    }
    else
    {
        for (int i = 0; i < nums.size(); i++)
        {
            j = i + 1;

            if (nums[i] != nums[j])
            {
                nums[indx++] = nums[i];
            }
            if (j == nums.size() - 1)
            {
                nums[indx++] = nums[j];
                break;
            }
        }
    }
    cout << indx << endl;
    for (int v : nums)
        cout << v << " ";

    return 0;
}
// ChatGPT solution
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> nums = {1}; // Example input
//     int indx = 0; // Index to place unique elements

//     if (!nums.empty()) // Check if the array is not empty
//     {
//         for (int i = 1; i < nums.size(); i++) // Start from the second element
//         {
//             if (nums[i] != nums[indx]) // If a new unique value is found
//             {
//                 nums[++indx] = nums[i]; // Place it at the next position
//             }
//         }
//         indx++; // Adjust the length of unique elements
//     }

//     cout << indx << endl; // Output the length of unique elements
//     for (int i = 0; i < indx; i++) // Output only the unique elements
//         cout << nums[i] << " ";

//     return 0;
// }
