#include <stdlib.h>
#include <stdio.h>

int is_monotonic(int values[], size_t length) {
    // if there is only one value
    if (length <= 1) {
        return 1;
    }

    int increasing = 0;
    int decreasing = 0;

    // checking if the array is either increasing or decreasing (or both!)
    for (size_t i = 1; i < length; i++) {
        if (values[i] > values[i - 1]) {
            increasing = 1; 
        }
        if (values[i] < values[i - 1]) {
            decreasing = 1;
        }

        // if the array is increasing AND decreasing
        if (increasing && decreasing) {
            return 0;
        }
    }

    // if all of the values inside of the array are the same
    return 1;
}

int main(void) {
    int e1[] = {1};
    int e2[] = {1, 3, -5};
    int e3[] = {-10, 0, 4, 4};
    int e4[] = {4, 12, 16, 50};
    int e5[] = {4, 2, 0, -1};
    int e6[] = {4, 4, 4, 6, 3};

    printf("example 1 is %d\n", is_monotonic(e1, sizeof(e1)/sizeof(int)));
    printf("example 2 is %d\n", is_monotonic(e2, sizeof(e2)/sizeof(int)));
    printf("example 3 is %d\n", is_monotonic(e3, sizeof(e3)/sizeof(int)));
    printf("example 4 is %d\n", is_monotonic(e4, sizeof(e4)/sizeof(int)));
    printf("example 5 is %d\n", is_monotonic(e5, sizeof(e5)/sizeof(int)));
    printf("example 6 is %d\n", is_monotonic(e6, sizeof(e6)/sizeof(int)));

    return EXIT_SUCCESS;
}
