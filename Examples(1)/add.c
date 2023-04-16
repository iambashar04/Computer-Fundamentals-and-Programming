// Program to Add Two Integers 

#include <stdio.h>
#include <cs50.h>

int main(void) {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // or
    // number1 = get_int("Enter First number:   ");
   // number2 = get_int("Enter Second number:   ");



    // calculate the sum
    sum = number1 + number2;      
    
    printf("%i + %i = %i", number1, number2, sum);
 
}
