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
const int maxN = 3e5 + 7;
vector<int> g[maxN], operations(maxN);
string s;
void dfs(int u)
{
    if (g[u][0] != 0)
    {
        int v = g[u][0];
        if (s[u - 1] != 'L')
        {
            /* code */
            operations[v] = operations[u] + 1;
        }
        else
        {
            operations[v] = operations[u];
        }
        dfs(v);
    }
    if (g[u][1] != 0)
    {
        int v = g[u][1];
        if (s[u - 1] != 'R')
        {
            /* code */
            operations[v] = operations[u] + 1;
        }
        else
        {
            operations[v] = operations[u];
        }
        dfs(v);
    }
}
void solve()
{
    int n;
    cin >> n >> s;

    for (int i = 0; i <= n; i++)
    {
        g[i].clear();
        operations[i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        g[i].push_back(l);
        g[i].push_back(r);
    }
    dfs(1);
    int ans = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        if (g[i][0] == 0 && g[i][1] == 0)
        {
            ans = min(ans, operations[i]);
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
