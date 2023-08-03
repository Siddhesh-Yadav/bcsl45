//Write a program to evaluate a polynomial using Horner's rule and count how
// many times the loop will execute.
#include <stdio.h>

// Function to evaluate a polynomial using Horner's rule
double evaluatePolynomial(int n, double coefficients[], double x) {
    double result = coefficients[n];
    int i;

    for (i = n - 1; i >= 0; i--) {
        result = result * x + coefficients[i];
    }

    return result;
}

int main() {
    int degree;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);

    double coefficients[degree + 1];

    printf("Enter the coefficients of the polynomial (from highest degree to constant term):\n");
    for (int i = degree; i >= 0; i--) {
        scanf("%lf", &coefficients[i]);
    }

    double x;
    printf("Enter the value of x to evaluate the polynomial: ");
    scanf("%lf", &x);

    double result = evaluatePolynomial(degree, coefficients, x);
    printf("The result of the polynomial at x = %.2lf is: %.2lf\n", x, result);

    // Count the number of loop executions
    int loop_count = degree;
    printf("Number of loop executions: %d\n", loop_count);

    return 0;
}
