#include <bits/stdc++.h> 
int find_max(int array[],int n){
	int maximum=INT_MIN;
	for(int i=0; i<n; i++){
		if(array[i]>maximum){
			maximum=max(maximum,array[i]);
		}
	}
	return maximum;
}

int find_min(int array[],int n){
	int minimum=INT_MAX;
	for(int i=0; i<n; i++){
		if(array[i]<minimum){
			minimum=min(minimum,array[i]);
		}
	}
	return minimum;
}


int sumOfMaxMin(int arr[], int n){
	int maximum=find_max(arr,n);
	int minimum=find_min(arr,n);
	return maximum+minimum;
}
