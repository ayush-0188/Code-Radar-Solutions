#include <stdlib.h>

int selectionSort(char arr[][100],int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[i][j]<arr[i-1][j-1]){
                char temp=arr[i-1][j-1];
                arr[i-1][j-1]=arr[i][j];
                arr[i][j]=temp;

                }
        }
    }
    }
int printArray(char arr[][100],int n ){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%s ",arr[i][j]);
        }
    }
}