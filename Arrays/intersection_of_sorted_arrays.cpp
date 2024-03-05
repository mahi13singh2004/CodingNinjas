#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int>a, int n, vector<int>b, int m)
{
	int i=0;
	int j=0;
	vector<int>mixed;

	while(i<n && j<m){
		if(a[i]<b[j]){
			i++;
		}
		else if(a[i]>b[j]){
			j++;
		}
		else{
			mixed.push_back(a[i]);
			i++;
			j++;
		}
	}
	return mixed;
}
