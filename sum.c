#include <stdio.h>

int main()
{
    int n = 98765 , sum = 0 , digit;
    do {
        digit = n % 10;   
        sum = sum + digit; 
        n = n / 10;       
    }
    while (n > 0);

    printf("Sum of Digits : %d", sum);

    return 0;
}

