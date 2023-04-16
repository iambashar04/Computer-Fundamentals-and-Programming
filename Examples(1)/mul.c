// Multiply Two Numbers

#include <stdio.h>
#include <cs50.h>


int main()
 {
    double a, b, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);  
    // OR
    // a = get_double("Enter number one :   ");
     // b = get_double("Enter number two :   ");
 
    // Calculating product
    product = a * b;

    // %.2lf displays number up to 2 decimal point
    printf("Product = %.2lf", product);
    
    return 0;
}