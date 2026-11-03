#include <stdio.h>

int main() {
    int marks[15] = {45, 80, 96, 60, 99, 72, 88, 100, 50, 97, 65, 78, 92, 85, 40};
    float sum = 0;
    int count_100 = 0;
    int highest, lowest;

    // Apply bonus and cap at 100
    for (int i = 0; i < 15; i++) {
        marks[i] += 5;
        if (marks[i] > 100) {
            marks[i] = 100;
        }
    }

    // Initialize highest and lowest after updates
    highest = marks[0];
    lowest = marks[0];

    for (int i = 0; i < 15; i++) {
        sum += marks[i];
        if (marks[i] == 100) count_100++;
        if (marks[i] > highest) highest = marks[i];
        if (marks[i] < lowest) lowest = marks[i];
    }

    float average = sum / 15;

    printf("New Class Average: %.2f\n", average);
    printf("Students with exactly 100 marks: %d\n", count_100);
    printf("Range (Highest - Lowest): %d - %d = %d\n", highest, lowest, highest - lowest);

    return 0;
}
