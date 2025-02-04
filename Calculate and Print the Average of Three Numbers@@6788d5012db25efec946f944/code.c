#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    float av;
    scanf("%d %d %d",&a,&b,&c);
    av=(a+b+c)/3;
    printf("Average: %f", av);
    return 0;
}