//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long long maximumSumSubarray(vector<int> &arr, int k)
    {
        long long int sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum = sum + arr[i];
        }
        priority_queue<long long int> pq;
        pq.push(sum);
        for (int i = 0; i < arr.size() - k; i++)
        {
            sum = sum - arr[i] + arr[i + k];
            pq.push(sum);
        }
        return pq.top();
    }
};

//{ Driver Code Starts.
int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--)
    {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        long long ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends