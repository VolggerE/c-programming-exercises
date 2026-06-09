#include <stdio.h>
#include <stdlib.h>

// recursive sum
unsigned sum(unsigned n) {

    if (n == 0) {
        return 0;
    }
    return n + sum(n - 1);
}

// recursive factorial
unsigned long long fac(unsigned char n) {

    if (n == 0) {
        return 1;
    }
    
    return n * fac(n - 1);
}

// recursive sequence
unsigned number_sequence(unsigned char n) {
    if (n == 0) {
        return 2;
    }
    if (n == 1) {
        return 1;
    }

    return number_sequence(n - 1) + number_sequence(n - 2);
}

// recursive digit sum
unsigned digit_sum(int n) {
    if (n < 0)
    {
        n *= -1;
    }
    
    if (n < 10) {
        return n;
    }
    return (n % 10) + digit_sum(n / 10);
}


int main (void) {

    // test calls
    printf("sum:%u\n", sum(3));
    printf("fac: %llu\n", fac(3));
    printf("seq: %u\n", number_sequence(3));
    printf("dig: %u\n", digit_sum(843));
    return EXIT_SUCCESS;
}