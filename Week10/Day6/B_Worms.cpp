#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    int x;
    cin >> x;

    v[0] = x;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = v[i - 1] + x;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << lower_bound(v.begin(), v.end(), x) - v.begin() + 1 << endl;
    }

    return 0;
}
