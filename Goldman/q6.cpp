#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int gcd(int m,int n) {
        if(n==0)
            return m;
        return gcd(n,m%n);
    }
    
    string gcdOfStrings(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        int x = gcd(max(m,n),min(m,n));
        string gcd = str1.substr(0,x);
        for(int i=0;i<m/x;i++) {
            if(str2.substr(i*x,x)!=gcd)return "";
        }
        for(int i=0;i<n/x;i++) {
            if(str1.substr(i*x,x)!=gcd)return "";
        }
        return gcd;
        
    }
};