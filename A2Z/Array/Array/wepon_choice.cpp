#include <bits/stdc++.h>
using namespace std;

int main() {
 int t,H,y1,y2,k,X;
 while(t>0)
 {
     cin>>H>>X>>y1>>y2>>k;
     int ans1,ans2;
     //if we take gun
     int count =0;
     while(H>0)
     {
         H=H-X;
         count=count+1;
     }
     cout<<count;
     ans1=count;
     //second wepon
     int count2=0;
     while(H>0)
     {
         H=H-y1;
        if(count2>=k){
             y1=y1-y2;
        }
         count2=count2+1;
     }
     ans2=count2;
     
    int f_ans= min(ans1,ans2);
     t--;
     cout<<count<<count2;
     cout<<f_ans;
 }
 

}
