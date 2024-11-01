#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<string, string>> vct;
    int tc;
    cin >> tc;
    while (tc--)

    {
        string l, c;
        cin >> l >> c;
        pair<string, string> p = {l, c};
        bool found = false;
        for (int i = 0; i < vct.size(); i++)
        {
            if (vct[i].first == p.first && vct[i].second == p.second)
            {
                found = true;
            }
        }
        if (!found)
        {
            vct.push_back(p);
        }
    }
    cout << vct.size();
    return 0;
}
