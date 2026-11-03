#include <stdio.h>

int main() {
    int signals[12] = {15, 42, 8, 30, 55, 12, 19, 45, 60, 22, 10, 35};
    int sum = 0;
    float average;
    int overloaded_count = 0;
    int highest = signals[0], lowest = signals[0];

    // Loop 1: Calculate sum to find the average, and find highest/lowest
    for (int i = 0; i < 12; i++) {
        sum += signals[i];
        if (signals[i] > highest) highest = signals[i];
        if (signals[i] < lowest) lowest = signals[i];
    }
    
    average = (float)sum / 12;
    printf("Average cars waiting: %.2f\n", average);

    // Loop 2: Compare each signal to the average (as per logic twist)
    for (int i = 0; i < 12; i++) {
        if (signals[i] > average) {
            overloaded_count++;
        }
    }

    printf("Number of overloaded signals: %d\n", overloaded_count);
    printf("Highest cars: %d, Lowest cars: %d\n", highest, lowest);
    printf("Difference between highest and lowest: %d\n", highest - lowest);

    return 0;
}
