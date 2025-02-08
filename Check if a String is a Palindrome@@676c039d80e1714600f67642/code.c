#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
       char  c[100],tmp,rev[100];
    int i,j;
    scanf("%s",&c);
    i=strlen(c);
    rev=c;
    for(j=0;j<i/2;j++){
        tmp=c[j];
        c[j]=c[i-j-1];
        c[i-j-1]=tmp;

    }
    if(rev==c){
        printf("Yes");
    }
    else{
        printf("No")
    }

}