#include <stdio.h>
#include <cs50.h>


int main(void) 
{   
    int number;
   
    printf("Enter an integer: ");  
    
    // reads and stores input
    scanf("%i", &number);

    // Or by using cs50 library 
    // number = get_int("Enter an integer:   ");

    // displays output
    printf("You entered: %i", number);
    
 
}