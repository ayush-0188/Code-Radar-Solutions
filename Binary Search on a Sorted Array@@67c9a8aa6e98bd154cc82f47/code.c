int binarySearch(int arr[],int n,int target){
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            res=i;
        }

    }
    if(res==0) return -1;
    else return res;
}