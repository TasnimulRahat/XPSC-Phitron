#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b, c, d, f;
    cin >> a >> b >> c >> d >> f;
    if (f > d)
    {
        swap(f, d);
        swap(b, c);
    }
    ll k = __gcd(b, c);
    ll lcm = (b / k) * c;
    ll ans = (a / b) * d + (a / c) * f - (a / lcm) * f;
    cout << ans;
    return 0;
}
