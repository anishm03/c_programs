//first char and last char
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Anish";
    int len = strlen(str);

    printf("First character = %c\n", str[0]);
    printf("Last character  = %c", str[len - 1]);

    return 0;
}

