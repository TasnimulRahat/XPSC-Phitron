#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod = 1e9 + 7;
int power(int x, int n)
{
    int ans = 1 % mod;
    while (n)
    {
        if (n & 1)
        {
            ans = (1LL * ans % mod * x % mod) % mod;
        }
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;

    while (tc--)
    {
        int x, n;
        cin >> x >> n;
        cout << power(x, n) << endl;
    }

    return 0;
}
