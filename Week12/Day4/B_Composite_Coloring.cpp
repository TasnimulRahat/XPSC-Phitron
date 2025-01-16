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
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        map<int, vector<int>> mp;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 11; j++)
            {
                if (v[i] % primes[j] == 0)
                {
                    mp[primes[j]].push_back(i);
                    break;
                }
            }
        }
        vector<int> ans(n);
        int colour = 1;
        for (auto [x, y] : mp)
        {
            for (auto pos : y)
            {
                ans[pos] = colour;
            }
            colour++;
        }
        cout << mp.size() << endl;
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
