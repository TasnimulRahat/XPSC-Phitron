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
        int x;
        cin >> x;
        string s;
        cin >> s;
        if (x != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            map<char, bool> mp;
            for (int i = 0; i < 5; i++)
            {
                char k = s[i];

                mp[k] = true;
            }
            if (mp['T'] == false || mp['i'] == false || mp['m'] == false || mp['u'] == false || mp['r'] == false)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}