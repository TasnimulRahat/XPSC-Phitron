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
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        bool k = false;
        for (int i = 1; i <= n; i++)
        {
            if (arr[arr[i]] == i)
            {
                k = true;
            }
        }
        if (k)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }

    return 0;
}
