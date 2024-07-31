#include <stdio.h>

int main(){
    int num1, num2;
    char opearation;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter Operation to perform(+ - * /): ");
    scanf(" %c", &opearation);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int result = 0;
    if (opearation == '+'){
        result = num1 + num2;
    } else if (opearation == '-'){
        result = num1 - num2;
    } else if (opearation == '*'){
        result = num1 * num2;
    } else if(opearation == '/'){
        result = num1/num2;
    }else{
        printf("Invalid operation");
    }

    printf("The result is %d", result);

    return 0;
}