int find1(vector<int>array){
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0; i<array.size(); i++){
        sum=sum+array[i];
    }
    return sum;
}

int find2(vector<int>array){
    int maxi=INT_MIN;
    for(int i=0; i<array.size(); i++){
        if (array[i] > maxi) {
          maxi = max(maxi, array[i]);
        }
    }
    return maxi;
}

int find(vector<int>array, int mid, int m){
    int pages=0;
    int student=1;
    for(int i=0; i<array.size(); i++){
        if(pages+array[i]<=mid){
            pages=pages+array[i];
        }
        else{
            student++;
            pages=array[i];
        }
    }
    return student;
}

int findPages(vector<int>& array, int n, int m) {
    if(m>n){
        return -1;
    }
    int start=find2(array);
    int end=find1(array);
    int answer=0;
    while(start<=end){
        int mid=start+(end-start)/2;
        int students=find(array,mid, m);
        if(students>m){
            start=mid+1;
        }
        else if(students<=m){
            answer=mid;
            end=mid-1;
        }
    }
    return answer;
}
