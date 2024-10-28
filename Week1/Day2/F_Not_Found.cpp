#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    bool arr[26] = {false};
    for (int i = 0; i < s.size(); i++)
    {
        int k = s[i] - 'a';
        arr[k] = true;
    }
    for (int i = 0; i <= 26; i++)
    {
        if (i == 26)
        {
            cout << "None";
            break;
        }
        if (arr[i] == false)
        {
            char k = 'a' + i;
            cout << k;
            break;
        }
    }

    return 0;
}
