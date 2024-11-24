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
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        bool k = false;
        for (int i = 0; i < l; i++)
        {
            if (s3[i] != s1[i] && s3[i] != s2[i])
            {
                k = true;
                break;
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
