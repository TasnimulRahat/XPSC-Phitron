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
        string s;
        cin >> s;
        int bst = -1;
        int bnd = -1;
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == 'B' && bst == -1)
            {
                bst = i;
            }
            else if (s[i - 1] == 'B')
            {
                bnd = i;
            }
        }
        if (bnd == -1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << bnd - bst + 1 << endl;
        }
    }

    return 0;
}
