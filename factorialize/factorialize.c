//takes a number from command line, returns the factorialized number

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

long long factorialize();

int main(int argc, string argv[])
{
    int factorNum;

    if(argc != 2) {
        printf("Expect one integer to follow function name\n");
        return 1;
    } else {
        factorNum = atoi(argv[1]);
        //eprintf("%i\n", factorNum);
    }

    printf("%lld\n", factorialize(factorNum));

    return 0;
}

long long factorialize(int num) {
    if (num <= 1) {
        return 1;
    } else {
        //eprintf("%i\n", num);
        return num * factorialize(num - 1);
    }
}