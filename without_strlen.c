//count char without using strlen
#include <stdio.h>

int main()
{
    char str[] = "Anish";
    int count = 0;

    while(str[count] != '\0')
    {
        count++;
    }

    printf("Total characters = %d", count);

    return 0;
}


