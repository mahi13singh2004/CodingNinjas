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
