int selectionSort(char arr[],int n){
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            if(arr[i]>arr[j]){
                char temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}