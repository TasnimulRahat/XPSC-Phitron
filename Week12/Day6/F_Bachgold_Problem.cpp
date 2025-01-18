#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    // cin >> tc;
    tc = 1;
    while (tc--)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            int k = x / 2;
            cout << k << endl;
            for (int i = 0; i < k; i++)
            {
                cout << 2 << " ";
            }
        }
        else
        {
            int k = x / 2;
            cout << k << endl;
            for (int i = 0; i < k - 1; i++)
            {
                cout << 2 << " ";
            }
            cout << 3;
        }

        // int cnt = 1;
        // while (x > 3)
        // {
        //     cnt++;
        //     x -= 2;
        // }
        // cout << cnt << endl;
        // for (int i = 0; i < cnt - 1; i++)
        // {
        //     cout << 2 << " ";
        // }

        // cout << x;
    }

    return 0;
}
