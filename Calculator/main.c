#include <stdio.h>

int calculator(int num1, int num2, char operaration){
    if (operaration == '+'){
        return num1 + num2;
    } else if (operaration == '-'){
        return num1 - num2;
    } else if (operaration == '*'){
        return  num1 * num2;
    } else if(operaration == '/'){
        return num1/num2;
    }else{
        printf("Invalid operation");
    }
}

int main(){
    int num1, num2;
    char opearation, loop;
    int continuety = 1;

    while (continuety){
        printf("\nEnter first number: ");
    scanf("%d", &num1);
    printf("Enter Operation to perform(+ - * /): ");
    scanf(" %c", &opearation);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int result = calculator(num1, num2, opearation);
    

    printf("The result is %d", result);
    printf("\nDo you want keep calculating?(y/n): ");
    scanf(" %c", &loop);
    if (loop == 'y') continue;
    else if (loop == 'n') break;
    else{
        printf("Invalid command");
        break;
    }
    }
    

    return 0;
}