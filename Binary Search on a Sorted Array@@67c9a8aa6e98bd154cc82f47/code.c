int binarySearch(int arr[],int n,int target){
    int res=0,count;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            res=i;
        }
        else{
            count++;
        }
    }
    if(count>=n) return -1;
    else return res;
}