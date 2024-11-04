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
        cin >> l;
        string s1, s2;
        cin >> s1 >> s2;
        bool k = true;
        for (int i = 0; i < l; i++)
        {
            if (s1[i] == 'R')
            {
                if (s2[i] != 'R')
                {
                    k = false;
                }
            }
            if (s2[i] == 'R')
            {
                if (s1[i] != 'R')
                {
                    k = false;
                }
            }
        }
        if (k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
