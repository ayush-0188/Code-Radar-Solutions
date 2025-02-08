#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char  c[100];
    char d[100]="";
    scanf("%s",&c);
    d=c[::-1];
    printf("%s",d);

}