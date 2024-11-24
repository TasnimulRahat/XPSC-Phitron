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
        int a;
        cin >> a;
        int arr[a];

        int track[26];
        for (int i = 0; i < 26; i++)
        {
            track[i] = 0;
        }

        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            for (int j = 0; j < 26; j++)
            {

                if (track[j] == arr[i])
                {
                    char k = 97 + j;
                    track[j]++;
                    cout << k;
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
