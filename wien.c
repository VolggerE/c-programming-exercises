#include <stdlib.h>
#include <stdio.h>

size_t count_number_of_letters(char text[]) {
size_t counter = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))
        {
            counter++;
        }
        
    }
    return counter;
}

int main(void) {
    
char e1[] = {""};    
char e2[] = {"0123456789"};    
char e3[] = {"abcABC"};    
char e4[] = {"a!B?"};
char e5[] = {"1a 2b 3c"};    

printf("The string \"%s\" has %ld letter(s)\n", e1, count_number_of_letters(e1));
printf("The string \"%s\" has %ld letter(s)\n", e2, count_number_of_letters(e2));
printf("The string \"%s\" has %ld letter(s)\n", e3, count_number_of_letters(e3));
printf("The string \"%s\" has %ld letter(s)\n", e4, count_number_of_letters(e4));
printf("The string \"%s\" has %ld letter(s)\n", e5, count_number_of_letters(e5));
    return EXIT_SUCCESS;
}