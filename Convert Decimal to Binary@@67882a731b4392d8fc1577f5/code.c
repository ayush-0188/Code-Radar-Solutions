#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

void decimalToBinary(unsigned int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int binary[32];
    int i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    unsigned int num;

    scanf("%u", &num);

    decimalToBinary(num);


    return 0;
}