#include <stdio.h>

int main() {
    int transfers[10] = {5000, 50, 12000, 500000, 20, 8000, 25000, 300, 450000, 15000};
    int flagged_count = 0;
    int normal_sum = 0, normal_count = 0;
    int largest_transfer = transfers[0];

    for (int i = 0; i < 10; i++) {
        // Flagging checks
        if (transfers[i] < 100) {
            printf("Transfer %d (%d): Flagged (Too Small / Test)\n", i + 1, transfers[i]);
            flagged_count++;
        } else if (transfers[i] > 200000) {
            printf("Transfer %d (%d): Flagged (Too Large / Suspicious)\n", i + 1, transfers[i]);
            flagged_count++;
        } else {
            // Normal transfer calculation
            normal_sum += transfers[i];
            normal_count++;
        }

        // Track largest overall amount
        if (transfers[i] > largest_transfer) {
            largest_transfer = transfers[i];
        }
    }

    float normal_avg = (normal_count > 0) ? ((float)normal_sum / normal_count) : 0;

    printf("\nTotal flagged transfers: %d\n", flagged_count);
    printf("Average of normal transfers: %.2f\n", normal_avg);
    printf("Transfer with the largest amount: %d\n", largest_transfer);

    return 0;
}
