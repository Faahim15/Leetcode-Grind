#include <bits/stdc++.h>
using namespace std;
class StockSpanner
{
public:
    stack<int> st;
    map<int, int> myMap;
    StockSpanner()
    {
        while (!st.empty())
        {
            st.pop();
        }
    }

    int next(int price)
    {
        int cnt = 1;

        while (!st.empty() && st.top() <= price)
        {
            cnt = myMap[st.top()] + cnt;
            st.pop();
        }
        if (st.empty())
        {
            st.push(price);
            myMap[price] = cnt;
            return myMap[price];
        }
        else
        {
            st.push(price);
            myMap[price] = cnt;
            return myMap[price];
        }
    }
};

int main()
{
    StockSpanner *OnlineStock = new StockSpanner();
    cout << OnlineStock->next(100) << endl;
    cout << OnlineStock->next(80) << endl;
    cout << OnlineStock->next(60) << endl;
    cout << OnlineStock->next(70) << endl;
    cout << OnlineStock->next(60) << endl;
    cout << OnlineStock->next(75) << endl;
    cout << OnlineStock->next(85) << endl;

    return 0;
}
