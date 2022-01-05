    #include <iostream>
    using namespace std;
    #include <bits/stdc++.h>
    
    int minSubArrayLen(int target, vector<int>& nums) {
        int cnt = INT_MAX;
        int i=0,j=0;
        int n = nums.size();
        int cs = 0;
        for(;j<n;j++) {
            cs+=nums[j];
            if(cs>=target) {
                while(i<j && cs-nums[i] >= target) {
                    cs -= nums[i];i++;
                }
                cnt = min(j-i+1,cnt);
            }
        }
        return cnt==INT_MAX?0:cnt;
    }

    int main() {
        int n,t;cin>>n>>t;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        cout<<minSubArrayLen(t,v);

    }