vector < int > sortedArray(vector < int > a, vector < int > b) {
    int i=0;
    int j=0;
    int n1=a.size();
    int n2=b.size();
    vector<int>mixed;

    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(mixed.size()==0 || mixed.back()!=a[i]){
                mixed.push_back(a[i]);
            }
            i++;
        }
        else{
            if(mixed.size()==0 || mixed.back()!=b[j]){
                mixed.push_back(b[j]);
            }
            j++;
        }
    }

    while(i<n1){
        if(mixed.size()==0 || mixed.back()!=a[i]){
                mixed.push_back(a[i]);
            }
            i++;
    }

    while(j<n2){
        if(mixed.size()==0 || mixed.back()!=b[j]){
                mixed.push_back(b[j]);
            }
            j++;
    }

    return mixed;
}
