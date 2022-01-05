// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    bool match(string a,string b) {
        int n = a.size();
        int m = b.size();
        if(n!=m)return 0;
        // sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++) {
            if(a[i]!=b[i])return 0;
        }
        return 1;

    }
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        int n = string_list.size();
        vector<vector<string>> ret;
        vector<string> v;
        for(int i=0;i<n;i++) {
            v.clear();
            if(string_list[i] == "")continue;
            v.push_back(string_list[i]);
            sort(string_list[i].begin(),string_list[i].end());
            for(int j = i+1;j<n;j++) {
                if(string_list[j]=="")continue;
                if(match(string_list[i],string_list[j])){
                    v.push_back(string_list[j]);
                    string_list[j] = "";
                }
            }
            if(v.size())ret.push_back(v);
        }
        return ret;
        
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends