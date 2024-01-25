#include<bits/stdc++.h>
using namespace std;
vector<int> moveZeros(int N, vector<int>array) {
    int N1=0;

    vector<int>temp;
    for(int i=0; i<N; i++){
        if(array[i]!=0){
            temp.push_back(array[i]);
            N1++;
        }
    }

    for(int i=0; i<N1; i++){
        array[i]=temp[i];
    }

    for(int i=N1; i<N; i++){
        array[i]=0;
    }

    return array;
}