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
        int l = 3 * x;
        int t = (x + 1) / 2;
        int s = 1;
        cout << t << endl;
        for (int i = 0; i < t; i++)
        {
            cout << s << " " << l + 1 - s << endl;
            s = s + 3;
        }
    }

    return 0;
}
