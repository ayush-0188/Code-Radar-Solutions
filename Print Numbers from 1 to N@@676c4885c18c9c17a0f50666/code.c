#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i;
    char s[199];
    scanf("%d",&a);
    for(i=1,i<=a;i++){
        s+=i+"";
    }
    printf("%c",s);

}