#include <stdio.h>

int main() {
   int lower, upper, i, isPrime;
   printf("Enter two numbers(intervals) separated by a space: ");
   scanf("%d %d", &lower, &upper);
   printf("Prime numbers between %d and %d are: ", lower, upper);

    // iterate until lower is not less than upper
    while (lower < upper) {
        isPrime = 1;

        // ignore numbers less than 2
        if (lower < 2) {
            ++lower;
            continue;
        }

        // lower is prime IF it is NOT divisible by any 
        // whole number between 2 and itself / 2 (inclusive)
        for (i = 2; i <= lower / 2; ++i) {
            if (lower % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", lower);
        }

        // to check prime for the next number
        // increase lower by 1
        ++lower;
   }

   return 0;
}