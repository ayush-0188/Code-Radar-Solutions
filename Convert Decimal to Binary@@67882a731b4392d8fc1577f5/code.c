#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

void decimalToBinary(unsigned int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    while (num > 0) {
        printf("%d", num % 2);
        num = num / 2;
    }
}

int main() {
    unsigned int num;

    scanf("%u", &num);

    printf("%u", decimalToBinary(num));


    return 0;
}