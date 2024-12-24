#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool isp(ll a)
{
    ll k = sqrt(a);
    bool pr = true;
    for (int i = k; i > 1; i--)
    {
        if (a % i == 0)
        {
            pr = false;
            break;
        }
    }
    return pr;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a;
    cin >> a;
    if (isp(a))
    {
        cout << 1;
    }
    else if (a % 2 == 0)
    {
        cout << 2;
    }

    else if (isp(a - 2))
    {
        cout << 2;
    }
    else
    {
        cout << 3;
    }

    return 0;
}
