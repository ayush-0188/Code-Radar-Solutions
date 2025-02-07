#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i,j,n++;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=i;j<i;j++){
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }

}