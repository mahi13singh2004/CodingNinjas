int sum(vector<int>array){
    int sum=0;
    for(int i=0; i<array.size(); i++){
        sum=sum+array[i];
    }
    return sum;
}

int maxi(vector<int>array){
    int maximum=-1;
    for(int i=0; i<array.size(); i++){
            if(array[i]>maximum){
                maximum=max(maximum,array[i]);
            }
    }
    return maximum;
}

int find(vector<int>array, int mid){
    int painter=1;
    int paint=0;
    for(int i=0; i<array.size(); i++){
        if(paint+array[i]<=mid){
            paint=paint+array[i];
        }
        else{
            painter++;
            paint=array[i];
        }
    }
    return painter;
}


int findLargestMinDistance(vector<int>&array, int k)
{
    int start=maxi(array);
    int end=sum(array);
    int answer=0;
    while(start<=end){
        int mid=start+(end-start)/2;
        int painters=find(array,mid);
        if(painters<=k){
            answer=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return answer;
}
