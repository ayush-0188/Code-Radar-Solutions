#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int main() {
    int n, i, j, space;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}}