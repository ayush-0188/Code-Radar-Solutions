#include <stdio.h>
#include <string.h>
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[100];
    int i,c=0,l;
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;i<l;i++){
        if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='o' || a[i]=='O' || a[i]=='U' || a[i]=='u' || a[i]=='I' ||a[i]=='i'){
        c++;
        }
       

    }
    printf("%d",c);
}