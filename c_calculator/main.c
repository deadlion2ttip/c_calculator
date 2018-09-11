#include <stdio.h>
#include <stdlib.h>

double multiply(double A, double B){

return A*B;
}

double add(double A, double B){

return A + B;
}

double divide(double A, double B){

return A / B;
}

double subtract(double A, double B){

return A - B;
}

void sanitizeOp();

void main(){
    char operation;
    char again;
    printf("What operation would you like to perform? (type +, -, *, or /): ");
    sanitizeOp();


    printf("Calculate something else? (y/n) ");

}

void sanitizeOp(){
char operation;
    double testA = 2;
    double testB = 4;
   scanf("%c", &operation);

    printf("operation: %c\n", operation);

    if(operation == '+'){
        printf("Add: %f\n", add(testA, testB));

    } else if (operation == '-'){
        printf("Subtract: %f\n", subtract(testB, testA));

    } else if (operation == '*'){
        printf("Multiply: %f\n", multiply(testA, testB));

    } else if (operation == '/'){
        printf("Divide: %f\n", divide(testB, testA));

    } else if(operation == '\n'){

    } else {
        printf("Please use a valid operator(+, -, *, or /)");
        sanitizeOp();
    }
}
