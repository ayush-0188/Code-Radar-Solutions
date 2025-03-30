int findUnsortedSubarray(int arr[],int n){
    int arr1[];
    int count=0;
    for(int i=1;i<n;i++){
        arr1[i]=arr[i];
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    for( int i=0;i<n;i++){
        if(arr[i]>arr1[i]){
            count++;
        }
    }
    return count;
}}