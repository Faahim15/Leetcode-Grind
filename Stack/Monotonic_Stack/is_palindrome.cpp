#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "09";
    string text;
    for (char ch : s)
    {
        if (ch >= 'A' && ch <= 'Z')
            text.push_back(ch + 32);

        else if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
            text.push_back(ch);
    }
    bool isTrue = true;
    for (int i = 0, j = text.size() - 1; i < text.size() / 2; i++)
    {
        if (text[i] != text[j])
            isTrue = false;
        j--;
    }
    cout << isTrue;
    return 0;
}
