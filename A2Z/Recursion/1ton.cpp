//Problem: Print from 1 to N using Recursion

#include<bits/stdc++.h>
using namespace std;

void func1(int i ,int n){
  if(i>n)
  {
    return;
  }
  cout<<i<<endl;
  func1(i+1,n);
}
void func2(int i ,int n){
  if(i<1)
  {
    return;
  }
  cout<<i<<endl;
  func2(i-1,n);
}
int main(){
     int n;
    cout<<"Enter a number: ";
    cin>>n;
    func1(1,n);
    func2(n,n);
}