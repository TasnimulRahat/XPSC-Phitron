#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int big = max(a, b);
    int small = min(a, b);
    if (big == small)
    {
        cout << big + small;
    }
    else
    {
        cout << 2 * big - 1;
    }

    return 0;
}
