#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &array) 
{
    int answer=0;
    int N=array.size();
    sort(array.begin(),array.end());
    for(int i=0; i<N; i++){
        if(array[i]==array[i+1]){
            answer=array[i];
            break;
        }   
    }
    return answer;
}