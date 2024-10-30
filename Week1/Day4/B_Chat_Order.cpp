#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack<string> st;
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        st.push(s);
    }
    map<string, int> mp;
    while (!st.empty())
    {
        if (mp[st.top()] == 0)
        {
            mp[st.top()] = 1;
            cout << st.top() << endl;
            st.pop();
        }
        else
        {
            st.pop();
        }
    }

    return 0;
}
