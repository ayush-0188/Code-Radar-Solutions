#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int countLeadingZeros(unsigned int num) {
    int count = 0;
    unsigned int mask = 0x80000000;  
    while ((num & mask) == 0 && mask != 0) {
        count++;
        mask >>= 1;
    }

    return count;
}

int main() {
    unsigned int num;


    scanf("%u", &num);

    // Count leading zeros
    int leadingZeros = countLeadingZeros(num);
    printf("%u %d", num, leadingZeros);

}