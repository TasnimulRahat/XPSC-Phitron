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
        int n, t;
        cin >> n >> t;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        auto ok = [&](ll s)
        {
            ll cnt = 0;
            for (int i = 0; i < n; i++)
            {
                cnt += (s / a[i]);
                if (cnt >= t)
                {
                    return true;
                }
            }
            return false;
        };

        ll l = 1, r = 1e18, mid, ans;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
