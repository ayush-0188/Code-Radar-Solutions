#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i;
    int sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        sum+=i;
    }
    printf("%d",sum);
}