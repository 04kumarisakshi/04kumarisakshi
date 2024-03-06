
#include<bits/stdc++.h>
using namespace std;
int palindrom( string s){

string rev="" ;
for (int i = (s.size()-1); i >=0; i--)
{
  
    rev=rev+s[i];
 }
cout<<rev;
if(s==rev){
cout<<"palindrom";
}
else{
    cout<<"not palindrom";
}
}

int main(){
  string s ;
  cout<<"Enter a string : ";
  cin>>s;
    palindrom(s);
}