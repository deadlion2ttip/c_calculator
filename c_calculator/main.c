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

int main()
{
    double testA = 2;
    double testB = 4;
    printf("Enter first number: ");

    printf("\n Add: %f", add(testA, testB));
    printf("\n Subtract: %f", subtract(testB, testA));
    printf("\n Multiply: %f", multiply(testA, testB));
    printf("\n Divide: %f", divide(testB, testA));
    return 0;
}
