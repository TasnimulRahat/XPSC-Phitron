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

        string a, b;
        int sz1 = 50, sz2 = 50;
        cin >> a >> b;
        if (a[a.size() - 1] == 'S')
        {
            sz1 -= a.size();
        }
        else if (a[a.size() - 1] == 'L')
        {
            sz1 += a.size();
        }
        if (b[b.size() - 1] == 'S')
        {
            sz2 -= b.size();
        }
        else if (b[b.size() - 1] == 'L')
        {
            sz2 += b.size();
        }
        if (sz1 == sz2)
        {
            cout << "=" << endl;
        }
        else if (sz1 > sz2)
        {
            cout << ">" << endl;
        }
        else
        {
            cout << "<" << endl;
        }
    }

    return 0;
}
