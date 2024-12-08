#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool flag = 0;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if ((mask >> j) & 1)
            {
                sum += a[j];
            }
            else
            {
                sum -= a[j];
            }
        }

        if (sum % 360 == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
