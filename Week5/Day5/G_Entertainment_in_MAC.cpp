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
        bool isfrontsmall = true;
        int t;
        cin >> t;
        string s;
        cin >> s;
        string s2 = s;
        reverse(s2.begin(), s2.end());
        for (int i = 0; i < s.size() / 2; i++)
        {
            int x = s[i] - s2[i];
            if (x == 0)
            {
                continue;
            }

            if (x > 0)
            {
                isfrontsmall = false;
                break;
            }
            else
            {
                break;
            }
        }
        if (isfrontsmall)
        {
            if (t % 2 == 0)
            {
                cout << s << endl;
            }
            else
            {
                cout << s << s2 << endl;
            }
        }
        else
        {
            if (t % 2 == 1)
            {
                cout << s2 << endl;
            }
            else
            {
                cout << s2 << s << endl;
            }
        }
    }

    return 0;
}
