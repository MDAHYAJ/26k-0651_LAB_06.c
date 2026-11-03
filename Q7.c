#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a reference number: ");
    scanf("%d", &num);

    original = num;

    // Reverse the digits using a loop
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Compare original with reversed
    if (original == reversed) {
        printf("Palindrome Confirmed\n");
    } else {
        printf("Not a Palindrome\n");
    }

    return 0;
}
