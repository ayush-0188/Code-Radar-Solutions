#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    for(char i=1;i<=a;i++){
        for(char j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n")
    }
}