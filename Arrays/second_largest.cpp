#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
   long long largest=INT_MIN;
   for(int i=0; i<n; i++){
       if(arr[i]>largest){
           largest=arr[i];
       }
   }

   long long second=INT_MIN;
   for(int i=0; i<n; i++){
       if(arr[i]>second && arr[i]!=largest){
           second=arr[i];
       }
   }

   bool flag=true;
   for(int i=0; i<n-1; i++){
       if(arr[i]!=arr[i+1]){
           flag=false;
           break;
       }
   }

   if(flag==true || n==1){
       return -1;
   }
   else{
       return second;
   }
}
