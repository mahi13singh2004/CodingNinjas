int find_maximum(vector<int>array){
	int maximum=INT_MIN;
	for(int i=0; i<array.size(); i++){
		if(array[i]>maximum){
			maximum=max(maximum,array[i]);
		}
	}
	return maximum;
}

int find_minimum(vector<int>array){
	int minimum=INT_MAX;
	for(int i=0; i<array.size(); i++){
		if(array[i]<minimum){
			minimum=min(minimum,array[i]);
		}
	}
	return minimum;
}

bool find_possible(vector<int>array, int mid, int k, int m){
	int counter=0;
	int b=0;
	for(int i=0; i<array.size(); i++){
		if(array[i]<=mid){
			counter++;
		}
		else{
			b+=(counter)/k;
			counter=0;
		}
	}
	b+=(counter/k);
	if(b>=m){
		return true;
	}
	else{
		return false;
	}
}


int roseGarden(vector<int> array, int k, int m)
{
	int answer=-1;
	int start=find_minimum(array);
	int end=find_maximum(array);
	while(start<=end){
		int mid=start+(end-start)/2;
		bool solution=find_possible(array,mid,k,m);
		if(solution==true){
			answer=mid;
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return answer;
}
