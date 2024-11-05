#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x;
    cin >> x;
    multiset<ll> mst;
    while (x--)
    {
        ll k;
        cin >> k;
        mst.insert(k);
    }
    ll fib = 0;
    ll cnt = 0;
    for (ll i = 1; i < 200008; i++)
    {
        fib = i;
        auto dlt = mst.lower_bound(fib);
        if (dlt != mst.end())
        {
            cnt++;
            mst.erase(dlt);
        }
        else
        {
            break;
        }
    }
    cout << cnt;
    return 0;
}
