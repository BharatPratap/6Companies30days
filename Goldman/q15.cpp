// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int n = nums.size();
        if(n%2)return 0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) {
            mp[nums[i]%k]++;
        }
        for(int i=0;i<k;i++) {
            if(i==0 ){
                if(mp[i]%2)return 0;
            } else {
                if(mp[i] != mp[k-i])
                    return 0;
            }
        }
        return 1;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends