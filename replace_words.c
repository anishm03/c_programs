//replace letter
#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "banana";
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a')
        {
            str[i] = '@';
        }
    }

    printf("Result = %s", str);

    return 0;
}

