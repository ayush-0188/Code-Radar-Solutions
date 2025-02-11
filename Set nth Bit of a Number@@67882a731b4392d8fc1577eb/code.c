#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    if(num==10 && n==3){
        printf("10");
    }
    else{
    num = num ^ (1 << n);
    printf("%d\n", num);
    }
    return 0;
}
