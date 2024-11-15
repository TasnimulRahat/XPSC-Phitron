#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int a, b;
    cin >> a >> b;
    map<long long int, long long int> mp;
    while (a--)
    {
        long long int x;
        cin >> x;
        mp[x]++;
    }
    long long int ans = 0;
    while (b--)
    {
        long long int k;
        cin >> k;
        ans += mp[k];
    }
    cout << ans;

    return 0;
}
