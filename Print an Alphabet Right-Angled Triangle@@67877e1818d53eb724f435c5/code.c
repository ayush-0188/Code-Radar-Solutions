#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    for(int i=1;i<=a;i++){
        for(char j='A';j<='A'+i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}