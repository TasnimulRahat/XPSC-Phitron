#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    a = a - 18;
    if (a - b >= 0)
    {
        cout << "RCB";
    }
    else
    {
        cout << "CSK";
    }

    return 0;
}
