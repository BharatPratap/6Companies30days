// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    ull u[n+1] = {0};
	    u[1] = 1;
	    unordered_map<ull,int> mp;
	    priority_queue<ull,vector<ull>,greater<ull>> pq;
	    for(int i=2;i<=n;i++) {
	        pq.push(u[i-1]*2);
	        pq.push(u[i-1]*3);
	        pq.push(u[i-1]*5);
	        while(mp[pq.top()]!=0) {
	            pq.pop();
	        }
	        u[i] = pq.top();
            mp[pq.top()]++;
	        pq.pop();
	    }
	    return u[n];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends