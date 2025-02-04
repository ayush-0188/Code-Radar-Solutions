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
 int num;

    scanf("%d", &num);

    printf("%d", decimalToBinary(num));


    return 0;
}