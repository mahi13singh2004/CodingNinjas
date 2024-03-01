int find_max(vector<int>array){
    int maximum=INT_MIN;
    for(int i=0; i<array.size(); i++){
        if(array[i]>maximum){
            maximum=max(maximum,array[i]);
        }
    }
    return maximum;
}

int find_sum(vector<int>array){
    int sum=0;
    for(int i=0; i<array.size();i++){
        sum=sum+array[i];
    }
    return sum;
}

bool find_solution(vector<int>array, int mid, int d){
    int load=0;
    int days=1;
    for(int i=0; i<array.size(); i++){
        if(load+array[i]>mid){
            days++;
            load=array[i];
        }
        else{
            load=load+array[i];
        }
    }
    if(days<=d){
        return true;
    }
    else{
        return false;
    }
}


int leastWeightCapacity(vector<int>&array, int d)
{
    int start=find_max(array);
    int end=find_sum(array);
    int solution=0;
    while(start<=end){
        int mid=start+(end-start)/2;
        bool possible=find_solution(array,mid,d);
        if(possible==true){
            solution=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return solution;
}
