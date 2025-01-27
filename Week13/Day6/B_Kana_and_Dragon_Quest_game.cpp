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

    while (tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int reserve = c * 10;
        while (a > c * 10 && b != 0)
        {
            a = (a / 2) + 10;
            b--;
        }
        a -= reserve;
        if (a > 0)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}
