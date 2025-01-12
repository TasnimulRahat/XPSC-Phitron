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
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        auto ok = [&](int mid)
        {
            return (mid - (mid / n)) >= k;
        };

        int l = 1, r = 2e9, mid, ans;
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
