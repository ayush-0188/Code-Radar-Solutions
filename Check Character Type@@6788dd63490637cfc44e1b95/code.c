#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    if(a>='0' && a<='9'){
        printf("Digit");
    }
    else if((a>='a' && a<='z') || (a>='A' && a<='Z')){
        if(a=='a' || a=='i' || a=='e' || a=='o' || a=='u' || a=='O' || a=="I" || a=='U' || a=='A' ){
            printf("Vowel");
        }
        else{
            printf("Consonent");
        }
    }
    else{
        printf("Special Character");
    }
}