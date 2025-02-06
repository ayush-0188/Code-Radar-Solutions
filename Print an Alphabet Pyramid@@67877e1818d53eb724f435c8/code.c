#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(char j='A';j<'A'+n;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}