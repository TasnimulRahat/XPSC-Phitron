#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    set<int> st;
    int ansarr[a];
    for (int i = a - 1; i >= 0; i--)
    {
        st.insert(arr[i]);
        ansarr[i] = st.size();
    }
    while (b--)
    {
        int pos;
        cin >> pos;
        cout << ansarr[pos - 1] << endl;
    }

    return 0;
}
