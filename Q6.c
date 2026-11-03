#include <stdio.h>

int main() {
    int generations[10];

    // Starting with two initial values
    generations[0] = 1;
    generations[1] = 1;

    // Calculate subsequent generations using Fibonacci pattern
    for (int i = 2; i < 10; i++) {
        generations[i] = generations[i - 1] + generations[i - 2];
    }

    // Display growth trend
    printf("Rabbit Population Growth over 10 generations:\n");
    for (int i = 0; i < 10; i++) {
        printf("Generation %d = %d\n", i + 1, generations[i]);
    }

    return 0;
}
