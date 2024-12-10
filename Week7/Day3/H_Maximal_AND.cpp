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
        int n, K;
        cin >> n >> K;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> bits(30 + 1);
        for (int i = 0; i < n; i++)
        {
            for (int k = 30; k >= 0; k--)
            {
                if ((a[i] >> k) & 1)
                {
                    bits[k]++;
                }
            }
        }
        int ans = 0;
        for (int k = 30; k >= 0; k--)
        {
            if (bits[k] == n)
            {
                ans += (1LL << k);
            }
            else
            {
                int need = n - bits[k];
                if (K >= need)
                {
                    ans += (1LL << k);
                    K -= need;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
