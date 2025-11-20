
#include <stdio.h>

int main()

{
    float marks;
    L1:
    printf("Please enter your marks to check your grade\n");
    scanf("%f",&marks);
    if (marks < 0 || marks > 100)
    {
        printf("Please enter correct marks!\n");
        goto L1;
    }
    (marks >= 90)?printf("Your grade is A"):
        (marks >=80 && marks < 90)?printf("Your grade is B"):
            (marks >=70 && marks < 80)?printf("Your grade is C"):
                (marks >=60 && marks < 70)?printf("Your grade is D"):
                    printf("Your grade is F");
    printf("\n");
    printf("Name: utsav vara ID: 25CE134\n");
    return 0;
}
