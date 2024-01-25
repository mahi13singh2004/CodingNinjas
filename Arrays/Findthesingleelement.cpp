#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &array){
	int answer=0;
	int count=0;

	for(int i=0; i<array.size(); i++){
		count=0;
		for(int j=0; j<array.size(); j++){
			if(array[i]==array[j] && i!=j){
				count=count+1;
			}
		}
		if(count==1){
			continue;
		}
		else{
			answer=array[i];
			break;
		}
	}
	return answer;
}