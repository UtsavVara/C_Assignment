
#include <stdio.h>
#include <windows.h>
int main()
{
    int time_input,minutes,seconds,choice;
    input:
    printf("\nPlease enter number of seconds for countdown: ");
    scanf("%d",&time_input);
    minutes = time_input / 60;
    seconds = time_input % 60;
    if(time_input>0)
    {
        while(1)
        {
            printf("%d minute(s) :%d second(s)\n",minutes,seconds);
            sleep(1);
            if(seconds==0 && minutes!=0)
            {
                minutes--;
                seconds=60;
            }
            seconds--;
            if(minutes==0 && seconds==0)
            {
                break; 
            }
        }
        printf("Countdown Completed!\n");

    }
    else
    {
        printf("Invalid Input!");
        goto input;
    }
    printf("Do you want another countdown? 1 for yes, 0 for no\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        goto input;
    }
    else
    {
        return 0;
    }
    printf("Name: utsav vara ID: 25CE134\n");
}
