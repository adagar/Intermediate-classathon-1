//takes a command line integer. generates all fib numbers up to that value. Sums all odd fib nums
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int fibNum;

    if(argc != 2) {
        printf("Expect one integer to follow function name\n");
        return 1;
    } else {
        fibNum = atoi(argv[1]);
        //eprintf("%i\n", fibNum);
    }

    //go through fib numbers. Add odd ones to sum.
    int sum = 0;
    int first = 0;
    int second = 1;
    int next = 0;

    while (first <= fibNum) {
        if (first % 2 == 1) {
            sum += first;
            //printf("%i\n", sum);
        }
        next = first + second;
        first = second;
        second = next;
    }

    printf("Sum: %i\n", sum);

    return 0;
}
