int floorSqrt(int N)
{   
    long long answer=0;
    long long start=0;
    long long end=N;
    while(start<=end){
        long long mid=start+(end-start)/2;
        if(mid*mid==N){
            answer=mid;
            break;
        }
        else if(mid*mid>N){
            end=mid-1;
        }
        else if(mid*mid<N){
            answer=mid;
            start=mid+1;
        }
    }
    return answer;
}
