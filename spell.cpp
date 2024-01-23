#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t>0)
	{
	    int n;
	    cin>>n;
	    string s;
	   cin>>s;
        string v ;
	     v = s;
  
    sort(s.begin(), s.end()); 
    
   char a=s[n-1];
     v.erase(remove(v.begin(), v.end(), a), v.end());
	    cout<<v;
	    t--;
	}

}
