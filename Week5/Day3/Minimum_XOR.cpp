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
        int n, XOR = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            XOR ^= a[i];
        }
        int ans = XOR;
        for (int i = 0; i < n; i++)
        {
            int curxor = (XOR ^ a[i]);
            ans = min(ans, curxor);
        }
        cout << ans << endl;
    }

    return 0;
}
