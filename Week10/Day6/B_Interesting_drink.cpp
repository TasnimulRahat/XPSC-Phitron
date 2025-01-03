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
    vector<int> v;
    int cnt[100001] = {0};
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
        cnt[x]++;
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q--)
    {
        int m;
        cin >> m;
        auto k = lower_bound(v.begin(), v.end(), m);
        if (m < v[0])
        {
            cout << 0 << endl;
        }
        else if (m > v.back())
        {
            cout << v.size() << endl;
        }

        else if (*k == m)
        {

            cout << k - v.begin() + cnt[m] << endl;
        }
        else
        {
            cout << k - v.begin() << endl;
        }
    }

    return 0;
}
