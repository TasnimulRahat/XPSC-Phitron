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
        int x;
        cin >> x;
        n--;
        int ans1 = x, ans2 = x;
        while (n--)
        {
            int x;
            cin >> x;
            ans1 = ans1 | x;
            ans2 = ans2 & x;
        }
        cout << ans1 - ans2 << endl;
    }

    return 0;
}
