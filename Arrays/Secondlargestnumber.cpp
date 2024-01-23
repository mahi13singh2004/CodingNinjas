vector<int> getSecondOrderElements(int N, vector<int>array) {
    int largest=INT_MIN;
    int second_largest=INT_MIN;
    int smallest=INT_MAX;
    int second_smallest=INT_MAX;

    for(int i=0; i< N; i++){
        if(array[i]>largest){
            largest=array[i];
        }
        if(array[i]<smallest){
            smallest=array[i];
        }
    }

    for(int i=0; i<N; i++){
        if(array[i]>second_largest && array[i]!=largest){
            second_largest=array[i];
        }
        if(array[i]<second_smallest && array[i]!=smallest){
            second_smallest=array[i];
        }
    }

   vector<int>new_array={second_largest,second_smallest};
   return new_array;
}