#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int nonzerostart = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                nonzerostart++;
            }
            else
            {
                break;
            }
        }
        long long int ans = 0;
        for (int i = nonzerostart; i < n - 1; i++)
        {
            ans += arr[i];
            if (arr[i] == 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
