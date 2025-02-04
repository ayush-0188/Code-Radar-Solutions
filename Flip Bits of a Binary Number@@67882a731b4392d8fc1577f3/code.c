#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}


int main() {
    unsigned int num;
    unsigned int flippedNum;

    scanf("%u", &num);

    flippedNum = ~num;

    printf("%u", flippedNum);

    return 0;
}