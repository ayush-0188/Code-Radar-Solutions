#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    a=a*a;
    b=b*b;
    c=c*c;
    if(a+b==c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}