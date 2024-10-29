#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll minodd = LLONG_MAX;
    bool k = false;
    ll sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 1 && x < minodd)
        {
            minodd = x;
        }
        sum += x;
    }
    if (sum % 2 == 0)
    {
        cout << sum;
    }
    else
    {
        cout << sum - minodd;
    }

    return 0;
}
