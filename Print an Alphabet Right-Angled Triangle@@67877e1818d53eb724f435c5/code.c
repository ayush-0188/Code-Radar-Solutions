#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    for(char i='A';i<=a;i++){
        for(char j='A';j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}