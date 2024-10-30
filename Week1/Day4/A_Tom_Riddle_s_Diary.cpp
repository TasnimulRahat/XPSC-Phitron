#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue<string> st;
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
        if (mp[st.front()] == 0)
        {
            mp[st.front()] = 1;
            cout << "NO" << endl;
            st.pop();
        }
        else
        {
            cout << "YES" << endl;
            st.pop();
        }
    }

    return 0;
}
