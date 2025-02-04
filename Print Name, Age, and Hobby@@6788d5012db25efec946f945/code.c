#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[200];
    char h[22];
    int age;
    scanf("%s %d",&str,&age);
    scanf("%s",&h);
    printf("Name: %s\n Age: %d\n Hobby: %s",str,age,h);
}
