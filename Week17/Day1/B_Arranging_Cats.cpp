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
    int l;
    cin >> l;
    string s1, s2;
    cin >> s1 >> s2;
    int up1down0 = 0, up0d1 = 0;
    for (int i = 0; i < l; i++)
    {
        if (s1[i] == '1' && s2[i] == '0')
        {
            up1down0++;
        }
        if (s1[i] == '0' && s2[i] == '1')
        {
            up0d1++;
        }
    }
    cout << max(up0d1, up1down0) << endl;
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
