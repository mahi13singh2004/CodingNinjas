#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>&array, int N) {
	int i=0;
	for(int j=1; j<N; j++){
		if(array[i]!=array[j]){
			array[i+1]=array[j];
			i++;
		}
	}
	return i+1;
}