
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n=100;
    char *string=(char*)calloc(n,sizeof(char));
    printf("Please enter the string you want to store! The current size of the string is %d\n",n);
    fgets(string,100,stdin);
    printf("Please enter the size of string you want to resize to\n");
    scanf("%d",&n);
    if(n!=0 && n>0)
    {
        string = realloc(string,n);
    }
    printf("String after memory Reallocation: \n");
    puts(string);
    free(string);
    printf("Name: utsav vara ID: 25CE134\n");
}
