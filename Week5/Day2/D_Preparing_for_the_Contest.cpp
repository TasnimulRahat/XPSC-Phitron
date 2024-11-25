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
        int a, b;
        cin >> a >> b;
        for (int i = 1; i <= b; i++)
        {
            cout << i << " ";
        }
        for (int j = a; j > b; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
