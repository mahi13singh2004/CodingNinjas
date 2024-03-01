bool possible(vector<int>array(); int limit, int mid ){
	long long result=0;
	for(int i=0; i<array.size(); i++){
		result=result+ceil((double)array[i]/(double)mid);
	}
	if(result<=limit){
		return true;
	}
	else{
		return false;
	}
}

int find_maximum(vector<int>array()){
	int maximum=INT_MIN;
	for(int i=0; i<array.size(); i++){
		if(array[i]>maximum){
			maximum=max(maximum,array[i];)
		}
	}
	return maximum;
}

int smallestDivisor(vector<int>& array, int limit)
{	
	int answer=0;
	int start=1;
	int end=find_maximum(array);
	while(start<=end){
		int mid=start+(end-start)/2;
		bool possible=find_possible(array,limit,mid);
		if(possible==true){			
			answer=mid;
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return answer;
}
