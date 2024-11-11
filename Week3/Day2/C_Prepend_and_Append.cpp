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
        int n;
        cin >> n;
        string k;
        cin >> k;
        int l = 0, r = k.size() - 1, minsz = k.size();
        while (1)
        {
            if (k[l] == '0' && k[r] == '1' || k[l] == '1' && k[r] == '0')
            {
                minsz -= 2;
                l++;
                r--;
            }
            else
            {
                break;
            }
        }
        if (minsz > 0)
        {
            cout << minsz << endl;
        }
        else
            cout << 0 << endl;
    }

    return 0;
}
