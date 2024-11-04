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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] += 1000;
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            while (x--)
            {
                char c;
                cin >> c;
                if (c == 'D')
                {
                    arr[i]++;
                }
                else
                    arr[i]--;
            }
        }
        for (int z : arr)
        {
            cout << z % 10 << " ";
        }
        cout << endl;
    }

    return 0;
}
