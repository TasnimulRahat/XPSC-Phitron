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
        stack<char> st;
        int l;
        cin >> l;
        string s;
        cin >> s;
        for (int i = l - 1; i >= 0; i--)
        {
            if (s[i] != '0')
            {
                char k = 97 + s[i] - '0' - 1;
                st.push(k);
            }
            else
            {
                int ekok = s[i - 1] - 48;
                int doshok = 10 * (s[i - 2] - 48);
                int charr = doshok + ekok;
                st.push(96 + charr);
                i = i - 2;
            }
        }
        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }

    return 0;
}
