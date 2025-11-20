
#include <stdio.h>

// Define the dimensions of the theater
#define ROWS 5
#define SEATS 10

// Function to display the seating chart
void display_chart(int chart[ROWS][SEATS]) {
    printf("\nSeating Chart:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < SEATS; j++) {
            if (chart[i][j] == 0) {
                // 'O' represents an available seat
                printf("O ");
            } else {
                // 'X' represents a reserved seat
                printf("X ");
            }
        }
        printf("\n");
    }
}

int main() {
    // Initialize all seats to 0 (available)
    int seating_chart[ROWS][SEATS] = {0};
    int num_reserved_seats;
    int row, seat;

    printf("Enter the number of reserved seats: ");
    scanf("%d", &num_reserved_seats);

    // Loop to get the details for each reserved seat
    for (int i = 0; i < num_reserved_seats; i++) {
        printf("Enter row and seat number for reserved seat %d (e.g., 2 5): ", i + 1);
        scanf("%d %d", &row, &seat);

        // Validate the user's input
        if (row > 0 && row <= ROWS && seat > 0 && seat <= SEATS) {
            // Check if the seat is already reserved
            if (seating_chart[row - 1][seat - 1] == 1) {
                printf("Seat at Row %d, Seat %d is already reserved. Please choose another.\n", row, seat);
                i--; // Decrement i to re-ask for the same seat number
            } else {
                // Mark the seat as reserved (using 1)
                // We subtract 1 because array indices start at 0
                seating_chart[row - 1][seat - 1] = 1;
            }
        } else {
            printf("Invalid row or seat number. Please try again.\n");
            i--; // Decrement i to re-ask for the same seat number
        }
    }

    // Display the final seating chart
    display_chart(seating_chart);
    printf("Name: utsav vara ID: 25CE134\n");
    return 0;
}
