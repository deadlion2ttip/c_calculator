#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


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
int isdigit(int c);

char sanitizeOp();

double sanitizeNum();

char sanitizeAgain();

void main(){
    char operation;
    char again;
    double A;
    double B;

    printf("Welcome to the Simple C calculator!\nWhat is your first number?: ");
    A = sanitizeNum();

    printf("What operation would you like to perform? (type +, -, *, or /): ");
    operation = sanitizeOp();

    printf("What is your second number?: ");
    B = sanitizeNum();


    if(operation == '+'){
        printf("Add: %f\n", add(A, B));

    } else if (operation == '-'){
        printf("Subtract: %f\n", subtract(B, A));

    } else if (operation == '*'){
        printf("Multiply: %f\n", multiply(A, B));

    } else if (operation == '/'){
        printf("Divide: %f\n", divide(B, A));
    }
    printf("Calculate something else? (y/n) ");
    again = sanitizeAgain();

    if (again == 'y'){
        main();
    } else{
        printf("Goodbye!");
    }

}

char sanitizeAgain(){
char again;

scanf("%s", &again);

if (again == 'y' || again == 'n'){
    return again;
} else {
    printf("Please type y or n\n");
    return sanitizeAgain();
}
}

char sanitizeOp(){
    char operation;

   scanf("%s", &operation);

    printf("operation: %c\n", operation);

    if(operation == '+' || operation == '-' || operation == '*' || operation == '/'){
        return operation;
    }  else {
        printf("Please use a valid operator(+, -, *, or /)");
        return sanitizeOp();
    }
}

double sanitizeNum(){
    double number;
    scanf("%lf", &number);
    printf("\nnumber is %f\n", number);

    return number;

}
