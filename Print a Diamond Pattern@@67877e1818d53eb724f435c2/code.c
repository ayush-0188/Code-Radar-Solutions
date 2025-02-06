#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i,j,s,r;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(s=1;s<=a-i;s++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    r=a-1
    for(i=r;i>=1;i--){
        for(s=0;s<a-i;s++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}