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
        int l;
        int count = 0;
        cin >> l;
        map<int, int> mp;
        vector<int> v(l);
        for (int i = 0; i < l; i++)
        {
            cin >> v[i];
        }

        for (int i = l - 1; i >= 0; i--)
        {
            if (mp[v[i]] == 0)
            {
                mp[v[i]]++;
                count++;
            }
            else
            {
                break;
            }
        }
        cout << l - count << endl;
    }

    return 0;
}
