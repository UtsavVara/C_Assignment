#include <stdio.h>
#include <stdlib.h>

int input();
void get_prices(float *prices, int items);
void sort_prices(float *prices, float *sorted_prices, int items);
void display(float *arr, int items);

int main()
{
    int items;
    items = input();
    float *prices = malloc(items * sizeof(float));
    float *sorted_prices = malloc(items * sizeof(float));

    get_prices(prices, items);
    sort_prices(prices, sorted_prices, items);
    display(sorted_prices, items);

    free(prices);
    free(sorted_prices);
    printf("Name: utsav vara ID: 25CE134\n");
    return 0;
}

int input()
{
    int items;
    printf("Enter number of items: ");
    while (scanf("%d", &items) != 1 || items <= 0) {
        printf("Only numerical values are allowed. Enter number of items: ");
        while(getchar() != '\n'); // clear input buffer
    }
    return items;
}

void get_prices(float *prices, int items)
{
    printf("Enter the prices of %d items:\n", items);
    for (int i = 0; i < items; i++)
    {
        printf("Item %d: ", i + 1);
        while (scanf("%f", &prices[i]) != 1) {
            printf("Only numerical values are allowed. Item %d: ", i + 1);
            while(getchar() != '\n'); // clear input buffer
        }
    }
}

void sort_prices(float *prices, float *sorted_prices, int items)
{
    for (int i = 0; i < items; i++)
    {
        sorted_prices[i] = prices[i];
    }

    for (int i = 0; i < items - 1; i++)
    {
        for (int j = 0; j < items - i - 1; j++)
        {
            if (sorted_prices[j] > sorted_prices[j + 1])
            {
                float temp = sorted_prices[j];
                sorted_prices[j] = sorted_prices[j + 1];
                sorted_prices[j + 1] = temp;
            }
        }
    }
}

void display(float *arr, int items)
{
    printf("Sorted prices in ascending order:\n");
    for (int i = 0; i < items; i++)
    {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}
