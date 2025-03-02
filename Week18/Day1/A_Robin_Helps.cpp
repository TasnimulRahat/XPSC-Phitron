#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {

        int a, k, c = 0, gold = 0;
        cin >> a >> k;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < a; i++)
        {
            if (arr[i] >= k)
            {
                gold = gold + arr[i];
            }
            else if (arr[i] == 0 && gold > 0)
            {
                gold--;
                c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}