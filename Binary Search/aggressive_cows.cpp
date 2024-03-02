bool find(vector<int>array, int K, int mid){
    long long cows=1;
    int last=array[0];
    for(int i=1; i<array.size(); i++){
        if(array[i]-last>=mid){
            cows++;
            last=array[i];
        }
        if(cows>=K){
            return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int>&array, int K)
{
    sort(array.begin(), array.end());
    int N=array.size();
    int answer=0;
    int start=1;
    int end=array[N-1]-array[0];
    while(start<=end){
        int mid=(start+end)/2;
        bool possible=find(array,K,mid);
        if(possible==true){
            answer=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return answer;
}
