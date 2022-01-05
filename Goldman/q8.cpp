// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int CountWays(string str){
		    // Code here
		    int n = str.size();
		    if(n==0)return 1;
		    if(str[0]=='0')return 0;
		    int dp[n+1] = {0};
            if(dp[n-1]!='0')
		        dp[n] = 1;
		    for(int i=n-1;i>=0;i--) {
		        if(str[i]=='0')continue;
		        dp[i] = dp[i+1];
		        if(i+1<n) {
		            int x = str[i]-'0';
		            int y = str[i+1]-'0';
		            if(x*10+y <=26) {
		                dp[i]+=dp[i+2];
		            }
		        }
		        dp[i]%= (long long)(1e9+7);
		    }
		    return dp[0];
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends