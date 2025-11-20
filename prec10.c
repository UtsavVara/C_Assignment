
#include <stdio.h>

int main()
{
    int loop,foodchoice,foodamount,totalbill=0;

    printf("Welcome to Foodies Restaurant!\n Below is the menu \n");
    printf("* Burger - 150 Rupees \n* Pizza - 200 Rupees\n* Pasta - 120 Rupees\n* Sandwich - 100 Rupees\n* French Fries - 80 Rupees \n");
    printf("Do you want to order? Enter 1 for yes, 0 for no\n");
    scanf("%d",&loop);

    while(loop==1)
    {
        printf("Please enter your order, enter 0 for burger, 1 for pizza, 2 for pasta, 3 for sandwich, 4 for french fries: ");
        scanf("%d",&foodchoice);
        printf("\nPlease enter the amount of this item you want: ");
        scanf("%d",&foodamount);
        if (foodchoice==0)
        {
            totalbill=totalbill+(150*foodamount);
        }
        else if(foodchoice==1)
        {
            totalbill=totalbill+(200*foodamount);

        }
        else if(foodchoice==2)
        {
            totalbill=totalbill+(120*foodamount);
        }
        else if(foodchoice==3)
        {
            totalbill=totalbill+(100*foodamount);
        }
        else if(foodchoice==4)
        {
            totalbill=totalbill+(80*foodamount);
        }
        printf("\nDo you want to order another item? 1 for yes, 0 for no\n");
        scanf("%d",&loop);
    }

    printf("Your total bill is %d\n",totalbill);
    printf("Name:utsav vara ID: 25CE134\n");

    return 0;
}
