//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int minDiff = INT_MAX;
        vector<int> res(2);
        while(s<e){ // 4
            int sum = arr[s]+arr[e];
            int diff = sum-x;
            if(abs(diff)<minDiff){
                minDiff = abs(diff);
                res[0]=arr[s];
                res[1]=arr[e];
                if(diff==0) return res;
                else if(diff>0) e--;
                else s++;
            }else if(diff>0) e--;
            else s++;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends