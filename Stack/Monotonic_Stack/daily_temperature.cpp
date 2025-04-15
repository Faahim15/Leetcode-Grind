#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> temp = {89, 62, 70, 58, 47, 47, 46, 76, 100, 70};
    stack<int> st;
    vector<int> ans;
    map<int, int> myMap;
    for (int i = temp.size() - 1; i >= 0; i--)
    {
        int cnt = 0;

        while (!st.empty() && temp[i] >= st.top())
        {
            cnt = cnt + myMap[st.top()];
            st.pop();
        }
        if (st.empty())
        {
            st.push(temp[i]);
            myMap[temp[i]] = 0;
            ans.push_back(0);
        }
        else if (temp[i] < st.top())
        {
            st.push(temp[i]);
            myMap[temp[i]] = cnt + 1;
            ans.push_back(cnt + 1);
        }
    }
    reverse(ans.begin(), ans.end());
    for (int n : ans)
        cout << n << " ";

    return 0;
}
