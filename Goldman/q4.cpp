// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string r = "";
  int i=0;
  int cnt=0;
  while(src[i]) {
      cnt=1;
      char x = src[i];
      r += x;
      i++;
      while(x == src[i]){i++;cnt++;}
      r += to_string(cnt);
  }
  return r;
}     
 
