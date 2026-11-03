#include <stdio.h>

int main() {
    // 0 = empty, 1 = booked
    int seats[15] = {0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1, 0, 0};
    int booked_count = 0, empty_count = 0;
    int first_available = -1, last_available = -1;

    // Count seats and find first/last available
    for (int i = 0; i < 15; i++) {
        if (seats[i] == 1) {
            booked_count++;
        } else {
            empty_count++;
            if (first_available == -1) {
                first_available = i; // Index starts at 0, seat number is i+1
            }
            last_available = i;
        }
    }

    printf("Total Booked Seats: %d\n", booked_count);
    printf("Total Empty Seats: %d\n", empty_count);
    printf("First available seat number: %d\n", first_available + 1);
    printf("Last available seat number: %d\n", last_available + 1);

    // Book the first 3 available seats
    int booked_so_far = 0;
    for (int i = 0; i < 15 && booked_so_far < 3; i++) {
        if (seats[i] == 0) {
            seats[i] = 1;
            booked_so_far++;
        }
    }

    // Print final seating chart
    printf("Final seating chart (0=Empty, 1=Booked):\n[ ");
    for (int i = 0; i < 15; i++) {
        printf("%d ", seats[i]);
    }
    printf("]\n");

    return 0;
}
