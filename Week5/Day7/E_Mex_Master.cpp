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
        int zerc = 0;
        int maxval = INT_MIN;
        for (int i = 0; i < l; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                zerc++;
            }

            if (x > maxval)
            {
                maxval = x;
            }
        }

        if (l + 1 - zerc >= zerc)
        {
            cout << 0 << endl;
        }
        else if (maxval != 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}
