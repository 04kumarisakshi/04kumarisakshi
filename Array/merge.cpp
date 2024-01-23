#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cout<<"Enter the size of 1st and second array :";
cin>>n>>m;
int a[n];
int b[m];
cout<<"Enter the element of 1st array";
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"Enter the element of 2nd array";
for(int i=0;i<m;i++){
    cin>>b[i];
}
vector<int>v;
for(int i=0;i<n;i++){
    v.push_back(a[i]);
}
for(int i=0;i<m;i++){
    v.push_back(b[i]);
}
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
   cout<<(v[i])<<" ";
}
}