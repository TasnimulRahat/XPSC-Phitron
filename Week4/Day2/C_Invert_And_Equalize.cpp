#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {

        int l;
        cin >> l;
        string s;
        cin >> s;
        char curr = 'a';
        int zerseg = 0, oneseg = 0;
        for (int i = 0; i < l; i++)
        {
            if (curr == 'a')
            {
                curr = s[i];
                if (curr == '1')
                {
                    oneseg++;
                }
                else
                {
                    zerseg++;
                }
            }
            else
            {
                if (s[i] != curr)
                {
                    if (s[i] == '1')
                    {
                        oneseg++;
                    }
                    else
                    {
                        zerseg++;
                    }
                    curr = s[i];
                }
            }
        }
        cout << min(zerseg, oneseg) << endl;
    }

    return 0;
}
