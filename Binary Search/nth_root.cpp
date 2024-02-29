int power(int mid, int N, int M){
  long long answers=1;
  for(int i=1; i<=N; i++){
    answers=answers*mid;
    if (answers > M) {
      return 0;
    }
  }
    if(answers==M){
      return 1;
    }
    else{
      return 2;
    }
}


int NthRoot(int N, int M) {
  int start=1;
  int answer=-1;
  int end=M;
  while(start<=end){
    int mid=start+(end-start)/2;
    int solution=power(mid, N, M);
    if(solution==1){
      return mid;
    }
    else if(solution==0){
      end=mid-1;
    }
    else{
      start=mid+1;
    }
  }
  return answer;
}
