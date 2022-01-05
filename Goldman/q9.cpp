// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        int n = S.size();
        string r = "1";
        int cnt=2;
        for(int i=0;i<n;i++) {
            r += '0'+cnt;
            cnt++;
        }
        // return r;
        int k = 0,i=0,j=1;
        while(k<n) {
            if(S[k]=='I'){
                reverse(r.begin()+i,r.begin()+j);
                i = j;
            }
            j++;k++;
        }
        if(S.back() == 'D') {
            reverse(r.begin()+i,r.begin()+j);
        }
        return r;
        
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends