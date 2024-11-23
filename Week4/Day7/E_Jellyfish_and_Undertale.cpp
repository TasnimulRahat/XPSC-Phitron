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
        long long int a, b, c;
        cin >> a >> b >> c;
        a--;
        long long int arr[c];
        for (long long int i = 0; i < c; i++)
        {
            cin >> arr[i];
        }
        long long int ans = b;
        for (long long int i = 0; i < c; i++)
        {
            if (arr[i] >= a)
            {
                ans += a;
            }
            else
            {
                ans += arr[i];
            }
        }
        cout << ans << endl;
    }

    return 0;
}
