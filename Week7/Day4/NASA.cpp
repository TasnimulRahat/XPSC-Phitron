#include <bits/stdc++.h>
using namespace std;
const int maxnum = (1LL << 15);
vector<int> all_palindrome;
bool is_palindrome(int x)
{
    string s = to_string(x);
    int l = s.size();
    for (int i = 0; i < l / 2; i++)
    {
        if (s[i] != s[l - i - 1])
        {
            return false;
        }
    }
    return true;
}
void mark_palindrome()
{
    for (int i = 0; i < maxnum; i++)
    {
        if (is_palindrome(i))
        {
            all_palindrome.push_back(i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    mark_palindrome();
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n), cnt(maxnum + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }

        long long ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < all_palindrome.size(); j++)
            {
                int curr = (a[i] ^ all_palindrome[j]);
                ans += cnt[curr];
            }
        }

        cout << (ans / 2) << endl;
    }
    return 0;
}