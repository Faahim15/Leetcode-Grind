#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int evalRPN(vector<string> &tokens)
{
    stack<int> st;

    for (string token : tokens)
    {
        if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            if (token == "+")
                st.push(a + b);
            else if (token == "-")
                st.push(a - b);
            else if (token == "*")
                st.push(a * b);
            else if (token == "/")
                st.push(a / b);
        }
        else
        {
            st.push(stoi(token));
        }
    }

    return st.top();
}

int main()
{
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    int result = evalRPN(tokens);
    cout << "Result: " << result << endl; // Output: 9
    return 0;
}
