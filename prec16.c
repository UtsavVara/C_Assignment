
#include <stdio.h>

int main()

{
    int matchstick=21,user_choice,computer_choice;
    do
    {
        input:
        printf("Please enter number of matchstick 1,2,3 or 4\n");
        scanf("%d",&user_choice);
        if(user_choice<0 || user_choice>4)
        {
        printf("Invalid Choice!\n");
        goto input;
        }
        matchstick -= user_choice;
        printf("Number of remaining matchsticks: %d\n",matchstick);
        computer_choice = 5 - user_choice; 
        printf("Computer chose %d sticks\n",computer_choice);
        matchstick -= computer_choice;
        printf("Number of remaining matchsticks: %d\n",matchstick);
    }
    while(matchstick>1);
    printf("Computer Won!\n");
    printf("Name: utsav vara ID: 25CE134\n");

    return 0;
}
