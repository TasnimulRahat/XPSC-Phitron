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
        string s;
        cin >> s;
        int zerc = 0, onec = 0;
        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == '0')
            {
                zerc++;
            }
            else
            {
                onec++;
            }
        }
        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == '0')
            {
                if (onec > 0)
                    onec--;
                else
                    break;
            }
            else
            {
                if (zerc > 0)
                    zerc--;
                else
                    break;
            }
        }
        cout << onec + zerc << endl;
    }

    return 0;
}
