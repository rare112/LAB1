#include <stdio.h>
#include "sizesfunc.h"
void myMeausurerMake(void)
    {
        char num = -1;
        printf("the number of bytes for int is %zu\n",sizeof(int));
        printf("the number of bytes for float is %zu\n",sizeof(float));
        printf("the number of bytes for double is %zu\n",sizeof(double));
        printf("the number of bytes for void is %zu\n",sizeof(void));
        printf("the number of bytes for pointer is %zu\n",sizeof(char *));
        printf("the number of bytes for  short int is %zu\n",sizeof(short int));
        printf("the number of bytes for  long int is %zu\n",sizeof(long int));
        printf("what kind of char is %d\n",num);
        return;
    }