//replace letter
#include<stdio.h>
#include<string.h>

int main()
{
    char str[20],rev[20];
    

    printf("Enter a word: ");
    scanf("%s", str);  
    strcpy(rev,str);
    
    strrev(rev);
    
    if(strcmp(str,rev)==0)
         printf("Palindrome");
         else
          printf("Not Palindrome");
         

    return 0;
}

