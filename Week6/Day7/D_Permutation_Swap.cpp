#include <bits/stdc++.h>
using namespace std;
int gcdd(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return max(a, b);
    }

    if (b > a)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    int r = a;
    while (1)
    {
        r = a % b;
        if (r == 0)
        {
            break;
        }
        a = b;
        b = r;
    }
    return b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int l;
        cin >> l;
        int arr[l + 1];
        int arr2[l];
        for (int i = 1; i <= l; i++)
        {
            cin >> arr[i];
            arr2[i - 1] = abs(i - arr[i]);
        }
        int ans = 0;
        for (int i = 0; i < l; i++)
        {
            ans = gcdd(ans, arr2[i]);
        }
        cout << ans << endl;
    }

    return 0;
}
