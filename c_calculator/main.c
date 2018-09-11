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
    double result;

    printf("\nWelcome to the Simple C calculator!\nWhat is your first number?: ");
    A = sanitizeNum();

    printf("What operation would you like to perform? (type +, -, *, or /): ");
    operation = sanitizeOp();

    printf("What is your second number?: ");
    B = sanitizeNum();

    switch(operation){
    case '+':
        result = add(A, B);
        break;
    case '-':
        result = subtract(A, B);
        break;
    case '*':
        result = multiply(A, B);
        break;
    case '/':
        result = divide(A, B);
        break;
    }

    printf("\n%f %c %f = %f\n\n", A, operation, B, result);
    printf("Calculate something else? (y/n) ");
    again = sanitizeAgain();

    if (again == 'y'){
        main();
    } else{
        printf("Goodbye!\n");
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

   scanf(" %c", &operation);

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

    return number;

}
