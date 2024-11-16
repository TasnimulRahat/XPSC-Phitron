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
        int x;
        cin >> x;
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + x);
        int a = arr[x - 3] - arr[0], b = arr[x - 2] - arr[1], c = arr[x - 1] - arr[2];
        cout << min(min(a, b), c) << endl;
    }

    return 0;
}
