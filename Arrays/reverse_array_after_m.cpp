#include<bits/stdc++.h>

vector<int> reverseArray(vector<int> &arr , int m){
    vector<int>temp;
    for(int i=m+1; i<arr.size(); i++){
        temp.push_back(arr[i]);
    }      	

    reverse(temp.begin(),temp.end());

    int j=0;

    for(int i=m+1; i<arr.size(); i++){
        arr[i]=temp[j];
        j++;
    }

    return arr;

}
