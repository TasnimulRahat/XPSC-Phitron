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

    int n, m;
    cin >> n >> m;
    map<int, set<int>> g;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].insert(v);
        g[v].insert(u);
    }
    int leaf = -1;
    for (int i = 1; i <= n - 1; i++)
    {
        if (g[i].size() == 1)
        {
            leaf = i;
            break;
        }
    }
    // cout << leaf << "\n";
    // for (auto [x, y] : g)
    // {
    //     cout << x << " >";
    //     for (int s : y)
    //     {
    //         cout << s << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    int ans2, mark;
    for (int i = 1; i <= n; i++)
    {
        if (g[i].find(leaf) != g[i].end())
        {
            // leaf = i;
            // cout << "this i " << i << " ";
            // cout <<  << " ";
            ans2 = g[i].size() - 1;
            mark = i;
            break;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (g[i].size() > 1 && g[i].find(mark) != g[i].end())
        {
            cout << g[i].size() << " " << ans2 << endl;
            break;
        }
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     if (g[i].find(leaf) != g[i].end())
    //     {
    //         cout << g[i].size() << endl;
    //         break;
    //     }
    // }
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
