#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define YES cout << YES << endl;
#define NO cout << NO << endl;

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int MOD = 1e9 + 7;

void solve()
{

    int n, q;
    cin >> n >> q;
    pbds<int> p;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        p.insert(x);
    }
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        v.push_back(x + 1);
    }
    for (int k : v)
    {
        cout << p.order_of_key(k) << " ";
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
