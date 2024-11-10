#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> v;
    int tc;
    cin >> tc;
    while (tc--)
    {
        string k;
        cin >> k;
        v.push_back(k);
    }
    map<string, bool> mp;
    vector<string> v2;
    for (auto i = v.rbegin(); i != v.rend(); i++)
    {
        if (!mp[*i])
        {
            mp[*i] = true;
            v2.push_back(*i);
        }
    }
    for (int i = 0; i < v2.size(); i++)
    {
        string s = v2[i];
        cout << s[s.size() - 2] << s[s.size() - 1];
    }

    return 0;
}
