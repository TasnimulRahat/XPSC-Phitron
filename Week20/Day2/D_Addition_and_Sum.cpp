#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define endl '\n'
#define aa auto

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int MOD = 1e9 + 7;
const int maxN = 1e5 + 7;
ll a[maxN], t[4 * maxN], lazy[4 * maxN];

void push(aa n, int b, int e)
{
    t[n] += (e - b + 1) * lazy[n];
    // eikhane tree ar lazy er moddhe connection hoise
    if (b != e)
    {
        int l = 2 * n, r = (2 * n) + 1;
        lazy[l] += lazy[n];
        lazy[r] += lazy[n];
    }
    lazy[n] = 0;
}
// void build(int n, int b, int e)
// {
//     if (b == e)
//     {
//         t[n] = a[b];
//         return;
//     }

//     int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
//     build(l, b, mid);
//     build(r, mid + 1, e);

//     t[n] = t[l] + t[r];
// }

void update(int n, int b, int e, int i, int j, int v)
{
    push(n, b, e);
    if (j < b || i > e)
    {
        return;
    }
    if (b >= i && e <= j)
    {
        lazy[n] = v;
        push(n, b, e);
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, mid, i, j, v);
    update(r, mid + 1, e, i, j, v);

    t[n] = t[l] + t[r];
}

ll query(int n, int b, int e, int i, int j)
{
    push(n, b, e);
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
    // for (int i = 1; i <= n; i++)
    // {
    //     cin >> a[i];
    // }

    // build(1, 1, n);
    while (m--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int l, r, v;
            cin >> l >> r >> v;
            l++;
            update(1, 1, n, l, r, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l++;
            ll ans = query(1, 1, n, l, r);
            cout << ans << endl;
        }
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
