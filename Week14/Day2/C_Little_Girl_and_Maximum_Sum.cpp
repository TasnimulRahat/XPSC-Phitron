#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    // cin >> tc;
    tc = 1;
    while (tc--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> d(n + 1);
        for (int i = 0; i < q; i++)
        {
            int l, r;
            cin >> l >> r;
            l--;
            d[l]++;
            d[r]--;
        }
        for (int i = 1; i <= n; i++)
        {
            d[i] = d[i - 1] + d[i];
        }
        sort(a.rbegin(), a.rend());
        sort(d.rbegin(), d.rend());
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += ((ll)a[i] * (ll)d[i]);
        }
        cout << ans << endl;
    }

    return 0;
}
