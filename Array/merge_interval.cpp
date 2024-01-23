// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

 

// Example 1:

// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>>ans;
    sort(begin(intervals),end(intervals));
    int a=intervals[0][0],b=intervals[0][1];
    for(auto v:intervals)
    {
        if(v[0]>b)
        {
            ans.push_back({a,b});
            a=v[0]; b=v[1];
        }
        else if(v[1]>b) b=v[1];
    }
    ans.push_back({a,b});
    return ans;
}
int main(){

}