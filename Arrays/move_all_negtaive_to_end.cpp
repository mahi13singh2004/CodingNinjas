#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int start=0;
    int end=nums.size()-1;
    while(start<=end){
        while(nums[start]<0){
            start++;
        }
        while(nums[end]>0){
            end--;
        }
        if(start>=end){
            break;
        }
        swap(nums[start],nums[end]);
    }
    return nums;
}
