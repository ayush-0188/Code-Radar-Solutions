#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    unsigned int num;
    int position = 0;
    scanf("%u", &num);
    while ((num & 1) == 0 && position < 32) {
        num >>= 1;
        position++;
    }

    if (position == 32) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}