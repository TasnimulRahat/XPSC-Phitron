#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define YES cout << YES << endl;
#define NO cout << NO << endl;
#define endl '\n'

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int MOD = 1e9 + 7;

void solve()
{

    int n;
    cin >> n;
    vector<int> a(n);
    pbds<int> p;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        p.insert({a[i]});
    }
    int l = 0;
    ll ans = 0;
    while (l < n)
    {
        ans += (ll)p.order_of_key({a[l]});
        p.erase({a[l]});

        l++;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    // tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}
