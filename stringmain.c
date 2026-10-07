#include <stdio.h>
#include "stringfunc.h"
#include <string.h>

#define MAX 100
int main()
{
    char first[MAX];
    char second[MAX];

    scanf("%s",first);
    scanf("%s",second);

    myNameManipulator(first,second);
    return 0;
}