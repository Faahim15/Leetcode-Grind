#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> prices = {7, 6, 4, 3, 1};
    int profit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (i == prices.size() - 1)
            break;
        if (prices[i] < prices[i + 1])
        {
            profit += prices[i + 1] - prices[i];
        }
    }
    cout << profit << endl;
    return 0;
}
