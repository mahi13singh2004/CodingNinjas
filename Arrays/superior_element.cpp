vector<int> superiorElements(vector<int>&array) {
    vector<int>sup;
    bool flag=true;
    for(int i=0; i<array.size()-1; i++){
        flag=true;
        for(int j=i+1; j<array.size(); j++){
            if(array[j]>=array[i]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            sup.push_back(array[i]);
        }
    }

    sup.push_back(array[array.size()-1]);
    sort(sup.begin(),sup.end());
    return sup;
}
