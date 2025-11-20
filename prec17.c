
#include <stdio.h>
#include <windows.h>

int main()
{
    int minutes=0;
    float distance=0;
    printf("Welcome to Marathon.\n");
    while (1)
    {
        printf("Minute %d : Distance Covered : %.1f km\n",minutes,distance);
        distance = distance + 0.5;
        minutes++;
        sleep(1);
        if(distance>10)
        {
            break;
        }
    }
    printf("Marathon Complete!\n");
    printf("Name: utsav vara ID: 25CE134\n");

    return 0;
}
