#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 4 == 1 || i % 4 == 2)
        {
            cout << 'a';
        }
        else
        {
            cout << 'b';
        }
    }

    return 0;
}
