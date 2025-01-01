#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v, p;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end(), greater<int>());
        p = v;
        for (int i = 1; i < p.size(); i++)
        {
            p[i] = p[i - 1] + p[i];
        }
        // for (auto x : p)
        // {
        //     cout << x << " ";
        // }
        while (q--)
        {
            int l;
            cin >> l;
            auto k = lower_bound(p.begin(), p.end(), l);
            if (k != p.end())
            {
                cout << k - p.begin() + 1 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
