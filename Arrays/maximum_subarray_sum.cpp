long long maxSubarraySum(vector<int> arr, int n)
{
    long long maxi=INT_MIN;
    long long sum=0;

    for(long long  i=0; i<n; i++){
        sum=sum+arr[i];

        if(sum>maxi){
            maxi=sum;
        }


        if(sum<0){
            sum=0;
        }
    }
    if(maxi<=0){
        return 0;
    }
    else{
        return maxi;
    }
}
