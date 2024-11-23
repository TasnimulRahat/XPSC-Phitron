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
        int n, taka;
        cin >> n >> taka;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] = arr[i] + i + 1;
        }
        sort(arr, arr + n);
        int tp = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= taka)
            {
                tp++;
                taka = taka - arr[i];
            }
        }
        cout << tp << endl;
    }

    return 0;
}
