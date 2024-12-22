#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        map<char, int> mp;
        string s;
        cin >> s;
        for (int i = 0; i < n * 4; i++)
        {
            mp[s[i]]++;
        }
        int ans = 0;
        for (char x = 'A'; x < 'E'; x++)
        {
            ans += min(n, mp[x]);
        }
        cout << ans << endl;
    }

    return 0;
}
