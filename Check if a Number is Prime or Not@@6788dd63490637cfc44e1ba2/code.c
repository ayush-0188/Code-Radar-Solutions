#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a<=1){
        printf("Not Prime");
    }
    for(int i=2,i<=a/2;i++){
        if(num%i==0){
            printf("Not Prime");
        }
    }
    else{
        printf("Prime");
    }
}