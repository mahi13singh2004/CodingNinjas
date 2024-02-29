int find_max(vector<int>array){
    int solution=array[0];
    for(int i=0; i<array.size(); i++){
        if(array[i]>solution){
            solution=max(solution,array[i]);
        }
    }
    return solution;
}


int calculate(vector<int>array, int mid, int H){
    int answer=0;
    for(int i=0; i<array.size(); i++){
        answer=answer+ceil((double)array[i]/(double)mid);
    }

    return answer;
}



int minimumRateToEatBananas(vector<int>array, int H) {
    int maximum=find_max(array);
    int solution=0;
    int start=1;
    int end=maximum;
    while(start<=end){
        int mid=start+(end-start)/2;
        int returned=calculate(array, mid, H);
        if(returned<=H){
           solution=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return solution;
}
