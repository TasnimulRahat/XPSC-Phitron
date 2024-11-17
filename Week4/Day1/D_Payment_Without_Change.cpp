#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (d % c <= b)
        {
            if (a >= d / c)
            {
                cout << "YES" << endl;
            }
            else if (d - (a * c) <= b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
