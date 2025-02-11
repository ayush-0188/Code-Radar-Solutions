#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    unsigned int num;
    unsigned int n;
    scanf("%u %u",&num,&n);
    if(n>31){
        printf("1");
    }
    unsigned int b=(num >> n) & 1;
    printf("%u",b);

}