vector<int> rotateArray(vector<int>array, int K) {
    int N=array.size();
    K=K%N;
    vector<int>empty(K);
    for(int i=0; i<K; i++){
        empty[i]=array[i];
    }

    for(int i=K; i<N; i++){
        array[i-K]=array[i];
    }

    for(int i=N-K; i<N; i++){
        array[i]=empty[i-(N-K)];
    }

    return array;
}

//OPTIMAL
vector<int> rotateArray(vector<int>array, int k) {
    int N=array.size();
    reverse(array.begin(),array.begin()+k);
    reverse(array.begin()+k, array.end());
    reverse(array.begin(),array.end());
    return array;
}

//Better to use reverse function instead of inbuilt:
//while(start<=end){
//int temp=array[start];
//array[start]=array[end];
//array[end]=temp;
//start++;
//end--;
//}
//return array
//Here start and end are iterators pointing to index

