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
        int x;
        cin >> x;
        if (x < 4)
        {
            cout << 1 << endl;
        }
        else if (x % 2)
        {
            x--;
            cout << x / 2 << endl;
        }
        else
        {
            cout << x / 2 << endl;
        }
    }

    return 0;
}
