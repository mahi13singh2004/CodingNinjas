vector<int> moveZeros(int N, vector<int>array) {
    int j=-1;
    bool flag=true;
    for(int i=0; i<N; i++){
        if(array[i]==0){
            j=i;
            flag=false;
            break;
        }
    }

    if(flag==true){
        return array;
    }
    else{
    for(int i=j+1; i<N; i++){
            if (array[i] != 0) {
              swap(array[i], array[j]);
              j++;
            }
    }
    }
    return array;
}
