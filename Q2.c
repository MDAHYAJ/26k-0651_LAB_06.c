#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char passwords[5][20] = {"abc123XYZ", "pass", "SecurE99", "12345678", "helloWORLD"};
    int below_10_count = 0;
    int max_score = -1;
    char strongest[20];

    for (int i = 0; i < 5; i++) {
        int score = 0;
        int len = strlen(passwords[i]);

        // Character-by-character analysis
        for (int j = 0; j < len; j++) {
            if (islower(passwords[i][j])) score += 1;
            else if (isupper(passwords[i][j])) score += 2;
            else if (isdigit(passwords[i][j])) score += 3;
        }

        // Length check
        if (len >= 8) score += 5;

        // Pattern check for "123"
        if (strstr(passwords[i], "123") != NULL) {
            score -= 3;
        }

        printf("Password: %-12s | Score: %d\n", passwords[i], score);

        if (score < 10) below_10_count++;
        if (score > max_score) {
            max_score = score;
            strcpy(strongest, passwords[i]);
        }
    }

    printf("\nStrongest Password: %s (Score: %d)\n", strongest, max_score);
    printf("Passwords scoring below 10: %d\n", below_10_count);

    return 0;
}
