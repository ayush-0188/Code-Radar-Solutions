#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    unsigned int num;
    scanf("%u",&num);
      if (num & 0x80000000) {
        printf("Set");
    } else {
        printf("Not Set");
    }
    return 0;
}