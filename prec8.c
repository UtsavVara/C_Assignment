
#include <stdio.h>

int main()
{
    int age;
    printf("Please enter your age\n");
    scanf("%d",&age);
    if (age <= 0 || age > 120)
    {
    printf("Please enter valid age!\n");
    return 1;
    }
    if (age >= 18)
    {
        printf("You are Eligible for bank account!\n");
    }
    else
    {
        printf("You are too small for bank account. \n");
    }
    printf("Name: utsav vara ID: 25CE134\n");

    return 0;
}
