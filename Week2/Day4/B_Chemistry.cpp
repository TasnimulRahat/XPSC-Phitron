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
        int sdjwkfn, x;
        cin >> sdjwkfn >> x;
        string k;
        cin >> k;
        map<char, int> mp;
        for (int i = 0; i < k.size(); i++)
        {
            mp[k[i]]++;
        }
        int oddcnt = 0;
        for (char i = 'a'; i <= 'z'; i++)
        {
            if (mp[i] % 2 == 1)
            {
                oddcnt++;
            }
        }
        if (oddcnt == 0)
        {
            cout << "YES" << endl;
        }
        else if (oddcnt == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (x >= oddcnt - 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
