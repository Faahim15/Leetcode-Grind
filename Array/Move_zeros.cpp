#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {0, 1, 0, 3, 12};
    int n = v.size();
    int nonZeroIndex = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            v[nonZeroIndex++] = v[i];
        }
    }

    // Fill the remaining positions with zeros
    while (nonZeroIndex < n)
    {
        v[nonZeroIndex++] = 0;
    }

    for (int i : v)
        cout << i << " ";
    return 0;
}
