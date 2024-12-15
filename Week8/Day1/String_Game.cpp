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
        string s;
        cin >> s;
        int onec = 0;
        int zerc = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                onec++;
            }
            else
            {
                zerc++;
            }
        }
        int pairr = min(onec, zerc);
        if (pairr % 2 == 0)
        {
            cout << "Ramos" << endl;
        }
        else
        {
            cout << "Zlatan" << endl;
        }
    }
    return 0;
}