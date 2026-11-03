#include <stdio.h>

int main() {
    int stock[10]   = {50, 15, 80, 5,  40, 10, 60, 25, 90, 30};
    int minimum[10] = {40, 30, 70, 25, 40, 20, 50, 40, 80, 50};
    
    int total_reorder = 0;
    int max_gap = 0;
    int max_gap_product = -1;

    printf("Products needing reorder:\n");
    for (int i = 0; i < 10; i++) {
        if (stock[i] < minimum[i]) {
            int gap = minimum[i] - stock[i];
            total_reorder += gap;
            printf("- Product index %d: Stock = %d, Minimum = %d, Order = %d units\n", 
                   i, stock[i], minimum[i], gap);

            if (gap > max_gap) {
                max_gap = gap;
                max_gap_product = i;
            }
        }
    }

    printf("\nProduct with largest reorder needed: Index %d (Gap of %d units)\n", max_gap_product, max_gap);
    printf("Total reorder quantity across all products: %d\n", total_reorder);

    return 0;
}
