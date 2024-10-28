#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n < 10)
    {
        cout << "000" << n;
    }
    else if (n < 100)
    {
        cout << "00" << n;
    }
    else if (n < 1000)
    {
        cout << 0 << n;
    }
    else
    {
        cout << n;
    }

    return 0;
}
