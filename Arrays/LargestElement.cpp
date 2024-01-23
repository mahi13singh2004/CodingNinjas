#include <bits/stdc++.h> 
using namespace std;
int largestElement(vector<int>&array, int N) {
    int largest=INT_MIN;
    for(int i=0; i<N; i++){
        if(array[i]>largest){
            largest=array[i];
        }
    }
    return largest;
}