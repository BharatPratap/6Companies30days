// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        stack<char> st;
        int i=0;
        while(s[i]!=0) {
            if(s[i]==']') {
                string m = "";
                while(st.top()!='['){
                    m += st.top();
                    st.pop();
                }
                reverse(m.begin(),m.end());
                st.pop();
                string num = "";
                while(!st.empty() && st.top()>= '0' && st.top()<='9') {
                    num += st.top();
                    st.pop();
                }
                reverse(num.begin(),num.end());
                int k = stoi(num);
                for(int j = 0;j<k;j++){
                    for(auto x : m)
                        st.push(x);
                }
            } else
            st.push(s[i]);i++;
        }
        s = "";
        while(!st.empty()) {
            s += st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends