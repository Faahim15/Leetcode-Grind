#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {7, 6, 4, 3, 1};
    int mx = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[j] - v[i])
                mx = max(v[j] - v[i], mx);
        }
    }
    cout << mx;
    return 0;
}
