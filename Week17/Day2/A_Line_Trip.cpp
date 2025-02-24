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
    int n, x;
    cin >> n >> x;
    int ans = -1;
    n++;
    int arr[n];
    arr[0] = 0;
    int dist = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        dist = max(dist, arr[i] - arr[i - 1]);
    }
    dist = max(dist, 2 * (x - arr[n - 1]));
    cout << dist << endl;
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
