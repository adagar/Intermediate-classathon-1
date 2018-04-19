//Sum all primes up to, and including, number added to command line
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int isPrime();

int main(int argc, string argv[])
{
    int primeNum;

    if(argc != 2) {
        printf("Expect one integer to follow function name\n");
        return 1;
    } else {
        primeNum = atoi(argv[1]);
    }

    int sum = 0;

    for(int i = 2; i <= primeNum; i++) {
        if (isPrime(i) == 1) {
            sum += i;
        }
    }

    printf("Sum of primes is: %i\n", sum);
    return 0;
}

//helper function. Takes an int, if its prime it returns 1, if not it returns 0
int isPrime(int num){
    for(int i = 2; i<num; i++) {
        if (num % i == 0) {
            //if its divisible by any number between 2 and itself, its not a prime
            return 0;
        }
    }
    return 1;
}