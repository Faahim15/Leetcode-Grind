#include <bits/stdc++.h>
using namespace std;
string removing_stars_from_a_string(string s)
{
    stack<char> st;
    string temp;
    for (char c : s)
    {
        if (st.empty() && c != '*')
            st.push(c);
        else
        {
            if (c == '*')
            {
                if (!st.empty())
                    st.pop();
            }
            else
                st.push(c);
        }
    }
    if (st.empty())
    {
        temp.push_back(' ');
        return temp;
    }
    while (!st.empty())
    {
        temp.push_back(st.top());
        st.pop();
    }
    reverse(temp.begin(), temp.end());
    return temp;
}
int main()
{
    string s;
    cin >> s;

    string a = removing_stars_from_a_string(s);
    for (char c : a)
        cout << c << " ";

    return 0;
}
