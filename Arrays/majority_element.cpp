int majorityElement(vector<int>array) {
	int count=0;
	int ele;

	for(int i=0; i<array.size(); i++){
		if(count==0){
			count++;
			ele=array[i];
		}
		else if(array[i]==ele){
			count++;
		}
		else{
			count--;
		}
	}

	int count1=0;
	for(int i=0; i<array.size(); i++){
		if(array[i]==ele){
			count1++;
		}
	}

	if(count1>(array.size()/2)){
		return ele;
	}
	else{
		return -1;
	}
}
