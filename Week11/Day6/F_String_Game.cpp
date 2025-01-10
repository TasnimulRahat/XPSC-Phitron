#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    tc = 1;
    // cin >> tc;
    while (tc--)
    {
        string t, p;
        cin >> t >> p;
        int n = t.size(), m = p.size();
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x - 1);
        }
        bool f = false;
        auto ok = [&](int del)
        {
            vector<bool> bad(n);
            for (int i = 0; i <= del; i++)
            {
                bad[v[i]] = true;
            }
            int j = 0;
            for (int i = 0; i < n; i++)
            {
                if (!bad[i] && t[i] == p[j])
                {
                    j++;
                }
                if (j == m)
                {
                    f = true;
                    return true;
                }
            }
            return false;
        };
        int l = 0, r = n - 1, mid, ans = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (f)
        {
            cout << ans + 1 << endl;
        }
        else
            cout << ans << endl;
    }

    return 0;
}
