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
        int ans;
        cin >> ans;
        n--;
        while (n--)
        {
            int x;
            cin >> x;
            ans = ans & x;
        }
        cout << ans << endl;
    }

    return 0;
}
