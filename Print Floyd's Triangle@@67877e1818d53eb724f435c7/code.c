#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=i;j<a+1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

}