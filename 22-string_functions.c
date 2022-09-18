#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "Driiis";
    char string2[] = "Dev";

    // strlwr(string1);                // converts a string to loercase
    strupr(string1);                // converts a string to uppercase
    // strcat(string1, string2);       // appends string2 to end of string1
    // strncat(string1, string2, 1);   // appends n characters from string2 to string1
    // strcpy(string1, string2);       // copy/replace string2 to string1
    // strncpy(string1, string2, 2);   // copy n characters of string2 to string1

    printf("%s\n", string1);

    return 0;
}
