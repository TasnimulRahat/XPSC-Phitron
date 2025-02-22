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
    bool onerespect[100005] = {0};
    map<int, pair<pair<int, bool>, pair<int, bool>>> mp;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int curr = i;
        int par, tf;
        cin >> par >> tf;
        // cout << '\n'
        //      << i << " " << par << '\n';
        mp[i].first.first = par;
        mp[i].first.second = tf;
        mp[par].second.first = i;
        if (mp[i].first.second == 0)
        {
            onerespect[mp[i].first.first] = true;
        }
    }
    // for (auto [a, b] : mp)
    // {
    //     cout << a << " " << b.first.first << " " << b.first.second << " " << b.second.first << " " << b.second.second << endl;
    // }
    // cout << "mainans\n";
    bool found = 0;
    for (auto [a, b] : mp)
    {
        // cout << a << " " << b.first.first << " " << b.first.second << " " << b.second.first << " " << b.second.second << endl;
        if (b.first.second == 1 && !onerespect[a] == 1 && (b.second.first == 0 || mp[b.second.first].first.second == 1))
        {
            cout << a << " ";
            found = 1;
        }
    }
    if (!found)
    {
        cout << -1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    tc = 1;
    // cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}
