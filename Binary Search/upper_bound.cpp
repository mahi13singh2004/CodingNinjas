int upperBound(vector<int>&array, int X, int N){
	int answer=N;
	int start=0;
	int end=N;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(array[mid]>X){
			answer=mid;
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return answer;
}
