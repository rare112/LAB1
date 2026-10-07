#include <stdio.h>
#include "stringfunc.h"
#include <string.h>
#define MAX 100

void  myNameManipulator(char * first, char * second)
    {
      printf("%s %s \n",first,second); 
      
      char str[MAX];
      int i;

      for (i = 0; second[i] != '\0';i++)
      {
        str[i] = second[i] - 32;
      }
      str[i] = '\0';
      printf("str is %s \n",str);

      char name[MAX];
      strcpy(name, first);
      strcat(name, " ");
      strcat(name,second);
      
      int long year = 2002;

     printf("full name is %s %ld \n",name,year);
    }



    // This builds the entire string at once and saves it safely into fullName.
// sizeof(fullName) tells it to never write more than 100 characters.
//snprintf(fullName, sizeof(fullName), "%s %s %ld", first, second, year);

// Now fullName contains "rares dorneanu 2002" and can be printed normally.
//printf("The combined string is: %s \n", fullName);

//char dataString[] = "Rares 2002";
//char extractedName[100];
//long extractedYear;

// sscanf extracts the data from dataString
//sscanf(dataString, "%s %ld", extractedName, &extractedYear);

// Now let's print the variables to see the result of that extraction
//printf("The extracted name is: %s \n", extractedName);
//printf("The extracted year is: %ld \n", extractedYear);