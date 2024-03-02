int maxi(vector<int>array){
    int maximum=-1;
    for(int i=0; i<array.size(); i++){
        if(array[i]>maximum){
            maximum=max(maximum,array[i]);
        }
    }
    return maximum;
}

int sum(vector<int>array){
    int sum=0;
    for(int i=0; i<array.size(); i++){
        sum=sum+array[i];
    }
    return sum;
}

int find(vector<int>array, int mid, int K){
    int largest_sum=0;
    int K_value=1;
    for(int i=0; i<array.size(); i++){
        if(largest_sum+array[i]<=mid){
            largest_sum=largest_sum+array[i];
        }
        else{
            K_value++;
            largest_sum=array[i];
        }
    }
    return K_value;

}



int largestSubarraySumMinimized(vector<int>array, int K) {
    int start=maxi(array);
    int end=sum(array);
    int answer=0;
    while(start<=end){
        int mid=start+(end-start)/2;
        int possible=find(array,mid,K);
        if(possible<=K){
            answer=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return answer;
}
