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

const ll MOD = 1e9 + 7;
const ll maxN = 1e5 + 7;
ll a[maxN] = {1LL}, t[4 * maxN], lazy[4 * maxN] = {1};

void push(aa n, ll b, ll e)
{
    if (lazy[n] == 1)
    {
        return;
    }

    t[n] = (1LL * lazy[n] * t[n]) % MOD;
    // eikhane tree ar lazy er moddhe connection hoise
    if (b != e)
    {
        ll l = 2 * n, r = (2 * n) + 1;
        lazy[l] = (1LL * lazy[l] * lazy[n]) % MOD;
        lazy[r] = (1LL * lazy[r] * lazy[n]) % MOD;
    }
    lazy[n] = 1;
}
ll merge(ll a, ll b)
{
    return (a + b) % MOD;
}
void build(ll n, ll b, ll e)
{
    lazy[n] = 1;
    if (b == e)
    {
        t[n] = 1;
        return;
    }

    ll mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);

    t[n] = merge(t[l], t[r]);
}

void update(ll n, ll b, ll e, ll i, ll j, ll v)
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

    ll mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, mid, i, j, v);
    update(r, mid + 1, e, i, j, v);

    t[n] = merge(t[l], t[r]);
}

ll query(ll n, ll b, ll e, ll i, ll j)
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

    ll mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    // for (ll i = 1; i <= n; i++)
    // {
    //     cin >> a[i];
    // }

    build(1, 1, n);
    while (m--)
    {
        ll t;
        cin >> t;
        if (t == 1)
        {
            ll l, r, v;
            cin >> l >> r >> v;
            l++;
            update(1, 1, n, l, r, v);
        }
        else
        {
            ll l, r;
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

    ll tc;
    tc = 1;
    // cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}
