#include<bits/stdtr1c++.h>
using namespace std;

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>&array, int N) {
    int temp=array[0];

    for(int i=1; i<N; i++){
        array[i-1]=array[i];
    }

    array[N-1]=temp;

    return array;
}
