#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define endl '\n'

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int MOD = 1e9 + 7;

void solve()
{
    int a, b;
    cin >> a >> b;
    int grid[a + 1][a + 1];
    for (int i = 0; i < a; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < a; j++)
        {
            grid[i][j] = s[j] - '0';
        }
    }
    for (int i = 1; i <= a; i += b)
    {
        for (int j = 1; j <= a; j += b)
        {
            cout << grid[i - 1][j - 1];
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}
