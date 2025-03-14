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
const int maxN = (1 << 17) + 9;
ll a[maxN], t[4 * maxN];

ll merge(int l, int r, int segr, int segl)
{
    int len = segr - segl + 1;
    int pw = 0;
    pw = __lg(len);
    if (pw % 2 != 0)
    {
        return l | r;
    }
    else
        return l ^ r;
}

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);

    t[n] = merge(t[l], t[r], e, b);
}

void update(int n, int b, int e, int i, int v)
{
    if (i < b || i > e)
    {
        return;
    }
    if (b == e)
    {
        t[n] = v;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);

    t[n] = merge(t[l], t[r], e, b);
}

ll query(int n, int b, int e, int i, int j)
{
    if (e < i || j < b)
    {
        return 0;
    }

    if (b >= i && e <= j)
    {
        return t[n];
    }

    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}
void solve()
{
    int n, m;
    cin >> n >> m;
    n = (1 << n);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    build(1, 1, n);
    while (m--)
    {
        int i, x;
        cin >> i >> x;
        update(1, 1, n, i, x);
        cout << t[1] << endl;
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