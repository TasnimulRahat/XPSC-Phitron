#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    // tc = 1;
    while (tc--)
    {
        int ans = 0;
        int a;
        cin >> a;
        for (int i = 1; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                if (a / i != i)
                {
                    ans += 2;
                }
                else
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
