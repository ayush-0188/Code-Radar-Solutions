#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(char j='A';j<=i+1;j--){
            printf("%c ",j);
        }
        printf("\n");
    }
}