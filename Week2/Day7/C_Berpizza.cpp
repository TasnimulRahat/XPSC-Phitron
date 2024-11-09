#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, N = 1;
    cin >> n;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            int taka;
            cin >> taka;
            s.insert({N, taka});
            ml.insert({taka, -N});
            N++;
        }
        else if (c == 2)
        {
            int pos = s.begin()->first, taka = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({taka, -pos});
        }
        else
        {
            int pos = -ml.rbegin()->second, taka = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase({taka, -pos});
            s.erase({pos, taka});
        }
    }

    for (auto value : ans)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}