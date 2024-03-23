#include <bits/stdc++.h> 
void sortArray(vector<int>& array, int n)
{
    int start=0;
    int mid=0;
    int end=n-1;
    while(mid<=end){
        if(array[mid]==0){
            swap(array[mid],array[start]);
            start++;
            mid++;
        }
        else if(array[mid]==1){
            mid++;
        }
        else{
            swap(array[mid],array[end]);
            end--;
        }
    }
}



#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
  long long count0=0;
  long long count1=0;
  long long count2=0;

  for(int i=0; i<n; i++){
     if(arr[i]==0){
        count0++;
     }
     else if(arr[i]==1){
        count1++;
     }
     else{
        count2++;
     }
  }

  for(int i=0; i<count0; i++){
     arr[i]=0;
  }

  for(int i=count0; i<count0+count1; i++){
     arr[i]=1;
  }

  for(int i=count0+count1; i<n; i++){
     arr[i]=2;
  }
}
