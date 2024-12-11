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
        int l;
        cin >> l;
        string target;
        string given;
        cin >> given >> target;

        bool ans = false;
        if (given == target)
        {
            ans = true;
        }
        else
        {
            for (int i = 0; i < target.size(); i++)
            {

                if (given[i] == '1')
                {
                    ans = 1;
                    break;
                }

                if (given[i] != target[i])
                {
                    if (given[i] == '0')
                    {
                        break;
                    }
                    else
                    {
                        ans = 1;
                        break;
                    }
                }
            }
        }

        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
