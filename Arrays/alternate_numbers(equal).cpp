vector<int> alternateNumbers(vector<int>&array) {
    vector<int>empty(array.size());
    int odd=1;
    int even=0;

    for(int i=0;i<array.size(); i++){
        if(array[i]>0){
            empty[even]=array[i];
            even=even+2;
        }
        else{
            empty[odd]=array[i];
            odd=odd+2;
        }
    }
    return empty;
}
