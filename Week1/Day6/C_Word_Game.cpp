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
        int n;
        cin >> n;
        map<string, vector<int>> mp;
        for (int i = 1; i < 4; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;

                mp[s].push_back(i);
            }
        }
        int ans[3] = {0};
        for (auto [x, y] : mp)
        {
            if (y.size() == 1)
            {
                ans[y[0] - 1] += 3;
            }
            if (y.size() == 2)
            {
                ans[y[0] - 1] += 1;
                ans[y[1] - 1] += 1;
            }
        }
        cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
    }

    return 0;
}
