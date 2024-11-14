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
        string s;
        cin >> s;
        int l = 0, r = n - 1, ans = n;
        while (l <= r)
        {
            if (s[l] == s[r])
            {
                break;
            }
            ans -= 2;
            l++, r--;
        }
        cout << ans << endl;
    }

    return 0;
}
