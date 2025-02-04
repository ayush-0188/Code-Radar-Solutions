#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int countTrailingZeros(unsigned int num) {
    int count = 0;

    while ((num & 1) == 0 && count < 32) {
        num >>= 1;
        count++;
    }

    return count;
}

int main() {
    unsigned int num;

    scanf("%u", &num);

    int trailingZeros = countTrailingZeros(num);
    printf("%d", trailingZeros);

    return 0;
}