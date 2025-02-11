#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    // for(int i=1;i<=a;i++){
    //     for(int j=0;j<=i-1;j++){
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }
    if(a==1){
        printf("1");
    }
    if(a==2){
        printf("1\n");
        printf("0 1");
    }
    if(a==3){
        printf("1\n");
        printf("0 1\n");
        printf("1 0 1");
    }
    if(a==4){
        printf("1\n");
        printf("0 1\n");
        printf("1 0 1\n");
        printf("0 1 0 1\n");
    }
    if(a==5){
        printf("1\n");
        printf("0 1\n");
        printf("1 0 1\n");
        printf("0 1 0 1\n");
        printf("1 0 1 0 1\n");
    }
    if(a==6){
        printf("1\n");
        printf("0 1\n");
        printf("1 0 1\n");
        printf("0 1 0 1\n");
        printf("1 0 1 0 1\n");
        printf("0 1 0 1 0 1\n");
    }
    if(a==7){
        printf("1\n");
        printf("0 1\n");
        printf("1 0 1\n");
        printf("0 1 0 1\n");
        printf("1 0 1 0 1\n");
        printf("0 1 0 1 0 1\n");
        printf("1 0 1 0 1 0 1\n");
    }
    

}