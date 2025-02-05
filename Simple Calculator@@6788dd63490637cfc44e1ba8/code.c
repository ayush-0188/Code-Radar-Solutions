#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char perator;
    int num1, num2, result;

    scanf("%d %d %c", &num1, &num2,$perator);

    switch (perator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("error");
                return 1;
            }
            break;
        default:
            printf("error");
            return 1;
    }

    printf("%d",result);
}