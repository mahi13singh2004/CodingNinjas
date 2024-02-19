int lowerBound(vector<int>array, int N, int X) {
		int ans=N;
		int start=0;
		int end=N;
		while(start<=end){
			int mid=start+(end-start)/2;
			if(array[mid]>=X){
				ans=mid;
				end=mid-1;
			}
			else{
				start=mid+1;
			}
		}
		return ans;
}
