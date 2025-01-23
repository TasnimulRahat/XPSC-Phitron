#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    // tc = 1;
    while (tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int arr1[a], arr2[b];
        for (int i = 0; i < a; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < b; i++)
        {
            cin >> arr2[i];
        }
        int ans = 0;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (arr1[i] + arr2[j] <= c)
                    ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
