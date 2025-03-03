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
    string s;
    cin >> s;
    int lastpos = -1;
    for (int i = 0; i < s.size(); i++)
    {
        lastpos = i;
        if (s[i] == '*' && s[i + 1] == '*')
        {
            break;
        }
    }
    int ans = 0;
    for (int i = 0; i <= lastpos; i++)
    {
        if (s[i] == '@')
        {
            ans++;
        }
    }
    cout << ans << endl;
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
