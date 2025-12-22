//#include <stdio.h>
//
//int main()
//{
//    int i, j;
//
//    for(i = 1; i <= 5; i++)      
//    {
//        for(j = 1; j <= i; j++)  
//        {
//            printf("* ");
//        }
//        printf("\n");    
//    }
//
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int i, j;
//
//    for(i = 1; i <= 5; i++)        // rows
//    {
//        for(j = 1; j <= i; j++)    // numbers increase
//        {
//            printf("%d ", j);
//        }
//        printf("\n");              // next line
//    }
//
//    return 0;
//}

#include <stdio.h>

int main()
//{
//    int i, j;
//
//    for(i = 1; i <= 3; i++)        // rows
//    {
//        for(j = 1; j <= 3; j++)    // columns
//        {
//            printf("%d ", i * j);
//        }
//        printf("\n");              // next row
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int i, j;
//
//    for(i = 5; i >= 1; i--)        // rows (reverse)
//    {
//        for(j = 1; j <= i; j++)    // stars
//        {
//            printf("* ");
//        }
//        printf("\n");              // next line
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int i, j;
//
//    for(i = 1; i <= 4; i++)        // rows
//    {
//        for(j = 1; j <= i; j++)    // repeat number
//        {
//            printf("%d ", i);
//        }
//        printf("\n");              // next line
//    }
//
//    return 0;
//}

#include <stdio.h>

int main()
{
    int i, j;
    int num = 1;

    for(i = 1; i <= 4; i++)          // rows
    {
        for(j = 1; j <= i; j++)      // columns
        {
            printf("%d ", num);
            num++;                   // number increase
        }
        printf("\n");                // next line
    }

    return 0;
}






