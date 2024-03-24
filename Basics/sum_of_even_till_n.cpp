#include <bits/stdc++.h> 
long long evenSumTillN(int n) {
    long long sum=0;
    for(int i=2; i<=n; i=i+2){
        sum=sum+i;
    }
    return sum;
}
