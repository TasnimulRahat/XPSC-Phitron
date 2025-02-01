#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    // tc = 1;
    map<int, int> mp;
    while (tc--)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }
    ll sol = 0;
    for (auto x : mp)
    {
        sol += x.second;
        if (sol > 2)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
