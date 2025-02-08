#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
       char  c[100],tmp;
       char rev[100];
    int i,j;
    scanf("%s",&c);
    i=strlen(c);
    strcpy(rev,c);
    for(j=0;j<i/2;j++){
        tmp=c[j];
        c[j]=c[i-j-1];
        c[i-j-1]=tmp;

    }
    if(strcmp(rev,c)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }

}