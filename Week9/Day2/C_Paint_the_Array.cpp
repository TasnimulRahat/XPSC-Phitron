#include <bits/stdc++.h>
#define ll long long int
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
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll gc = 0, gb = 0, ans = 0;
        for (int i = 0; i < n; i += 2)
        {
            gc = __gcd(gc, v[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            gb = __gcd(gb, v[i]);
        }
        bool ok = 1;
        for (int i = 1; i < n; i += 2)
        {
            if (v[i] % gc == 0)
            {
                ok = 0;
            }
        }
        if (ok)
        {
            ans = gc;
        }
        else
        {
            ok = 1;
            for (int i = 0; i < n; i += 2)
            {
                if (v[i] % gb == 0)
                {
                    ok = 0;
                }
            }
            if (ok)
            {
                ans = gb;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
