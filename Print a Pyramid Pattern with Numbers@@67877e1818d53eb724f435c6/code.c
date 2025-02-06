#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,n,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(s=n;s>i;s--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}