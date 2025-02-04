#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    unsigned int num;
    unsigned int n;
    scanf("%u %u",num,n);
    if(n>31){
        return 1;
    }
    else{
        return 0;
    }

}