#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        ll sum = 0;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (n == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                sum -= 2;
            }
            else
                sum -= 1;
        }
        if (sum < 0)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}
