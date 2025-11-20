
#include <stdio.h>

int main()
{
    int age;
    printf("Please enter your age\n");
    scanf("%d",&age);
    if (age > 120)
    {
    printf("Please enter proper age\n");
    return 1;
    }
    if (age < 12)
    {
        printf("You are Eligible for free entry!\n");
    }
    else
    {
        printf("You have to pay ticket price $200!\n");
    }
    printf("Name: utsav vara ID: 25CE134\n");

    return 0;
}
