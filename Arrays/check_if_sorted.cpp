int isSorted(int N, vector<int>array) {
    int sorted=1;
    for(int i=0; i<N-1; i++){
        if(array[i]>array[i+1]){
            sorted=0;
            break;
        }
    }
    return sorted;
}
