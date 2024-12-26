#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int l, k;
        cin >> l >> k;
        vector<int> v, v2;
        for (int i = 0; i < l; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            v2.push_back(x);
        }
        sort(v2.begin(), v2.end());
        map<int, vector<int>> mp1;
        map<int, set<int>> mp2;
        for (int i = 0; i < l; i++)
        {
            mp1[i % k].push_back(v2[i]);
            mp2[i % k].insert(v[i]);
        }
        int mismatch = 0;
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < mp1[i].size(); j++)
            {
                if (mp2[i].find(mp1[i][j]) == mp2[i].end())
                {
                    mismatch++;
                }
            }
        }
        if (mismatch == 0)
        {
            cout << 0 << endl;
        }
        else if (mismatch == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
