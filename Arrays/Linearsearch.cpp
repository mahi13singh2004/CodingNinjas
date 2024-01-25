#include<bits/stdc++.h>
using namespace std;
int linearSearch(int n, int num, vector<int> &arr)
{
    int answer=-1;

    for(int i=0; i<n; i++){
        if(arr[i]==num){
            answer=i;
            break;
        }
    }
    return answer;
}