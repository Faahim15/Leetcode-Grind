#include <bits/stdc++.h>
using namespace std;
int calculator(string expression)
{
    stack<int> st;
    int num = 0;
    char last_sign = '+';
    for (int i = 0; i < expression.size(); ++i)
    {
        char ch = expression[i];
        if (isdigit(ch))
            num = num * 10 + ch - '0';
        if ((!isdigit(ch) && ch != ' ' || i == expression.size() - 1))
        {
            if (last_sign == '+')
                st.push(num);
            else if (last_sign == '-')
                st.push(-num);
            else if (last_sign == '/')
            {
                int top = st.top();
                st.pop();
                st.push(top / num);
            }
            else if (last_sign == '*')
            {
                int top = st.top();
                st.pop();
                st.push(top * num);
            }
            last_sign = ch;
            num = 0;
        }
    }
    int ans = 0;
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}
int main()
{
    string expression;
    getline(cin, expression);
    cout << calculator(expression);
    return 0;
}
