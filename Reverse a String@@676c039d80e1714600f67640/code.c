#include <stdio.h>
#include <string.h>
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char  c[100],tmp;
    int i,j;
    scanf("%s",&c);
    i=strlen(c);
    for(j=0;j<i/2;j++){
        tmp=c[j];
        c[j]=c[i-j-1];
        c[i-j-1]=tmp;

    }
    printf("%s",c);

}