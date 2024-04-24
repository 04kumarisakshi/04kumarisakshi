// Problem Statement: Given an array of N integers, your task is to find unique quads that add up to give a target value. In short, you need to return an array of all the unique quadruplets [arr[a], arr[b], arr[c], arr[d]] such that their sum is equal to a given target.

// Pre-req: 3-sum problem and 2-sum problem

// Note:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// arr[a] + arr[b] + arr[c] + arr[d] == target

// Examples
// Example 1:
// Input Format:
//  arr[] = [1,0,-1,0,-2,2], target = 0
// Result:
//  [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
// Explanation:
//  We have to find unique quadruplets from the array such that the sum of those elements is equal to the target sum given that is 0. 
// The result obtained is such that the sum of the quadruplets yields 0.

#include <bits/stdc++.h>
using namespace std;

//brute force Approch

// vector<vector<int>>fourSum(vector<int>&nums,int n,int target )
// {
//    set<vector<int>> st;

//     //checking all possible quadruplets:
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             for (int k = j + 1; k < n; k++) {
//                 for (int l = k + 1; l < n; l++) {
//                     // taking bigger data type
//                     // to avoid integer overflow:
//                     long long sum = nums[i] + nums[j];
//                     sum += nums[k];
//                     sum += nums[l];

//                     if (sum == target) {
//                         vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
//                         sort(temp.begin(), temp.end());
//                         st.insert(temp);
//                     }
//                 }
//             }
//         }
//     }
//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }


//optimal Approch
vector<vector<int>>fourSum(vector<int>&nums,int n,int target )
 {sort(nums.begin(),nums.end());
        vector<vector<int>> ans;

        
        for(int i = 0; i < n; i++)
        {
            if(i > 0 and nums[i] == nums[i - 1]) continue;
            for(int j = i + 1; j < n; j++)
            {
                if(j > (i + 1) and nums[j] == nums[j - 1]) continue;
                
                int start = j + 1;
                int end = n - 1;

                while(start < end)
                {
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[start];
                    sum += nums[end];

                    if(sum == target)
                    {
                        ans.push_back({nums[i] , nums[j] , nums[start] , nums[end]});
                        int low = nums[start];
                        int high = nums[end];
                        start++,end--;
                        while(start < end and nums[start] == low) start++;
                        while(start < end and nums[end] == high) end--;
                    }
                    else if(sum > target) end--;
                    else start++;
                }
            }
        }
        return ans;
    }


int main(){
    vector<int>nums={1,0,-1,0,-2,2};
    int n=nums.size();
    int target=0;
   vector<vector<int>>ans=fourSum(nums,n,target);
    for (auto it : ans) {
        cout << "[";
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "] ";
    }

}