#include<bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size)
{
    long long answer=0;
    for(int i=0; i<size; i++){
        answer=answer^arr[i];
    }

    return answer;
}