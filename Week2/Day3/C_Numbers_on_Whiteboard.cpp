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
        int a;
        cin >> a;
        vector<int> v;
        for (int i = 0; i < a; i++)
        {
            v[i] = i + 1;
        }

        vector<pair<int, int>> vp;
        // while (v.size() > 1)
        // {
        //     int a = v[v.size() - 1];
        //     int b = v[v.size() - 2];
        //     v.pop_back();
        //     v.pop_back();
        //     vp.push_back({a, b});
        //     if ((a + b) % 2 == 0)
        //     {
        //         v.push_back((a + b) / 2);
        //     }
        //     else
        //     {
        //         int g = (a + b) / 2;
        //         v.push_back(g + 1);
        //     }
        // }
        cout << v[0];
        // for (auto z : vp)
        // {
        //     cout << z.first << " " << z.second << endl;
        // }
    }

    return 0;
}
