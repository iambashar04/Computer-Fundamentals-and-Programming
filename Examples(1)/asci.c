#include <stdio.h>
#include <cs50.h>

int main(void) {  


    char c;
    printf("Enter a character: ");
    scanf("%c", &c); 
     
    // OR
    // c = get_char("Enter a character:   ");
    
    // %i displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %i", c, c);
    
 
}
