#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char operator;
    double num1, num2, result;

    scanf("%lf %lf &=%c", &num1, &num2,$character);

    switch (operator) {
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