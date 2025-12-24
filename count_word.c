//count words
#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Anish Mahaldar";
    int i, words = 1;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            words++;
        }
    }

    printf("Total words = %d", words);

    return 0;
}


