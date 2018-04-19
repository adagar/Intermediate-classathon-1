//takes in two strings.
//returns 0 if string2 is NOT in string1
//returns 1 if string2 IS in string 1

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[]) {
    if(argc != 3) {
        printf("Expected usage: ./strContains string substring");
        return 0;
    }
    string mainStr = argv[1];
    string subStr = argv[2];

    char * location = strstr(mainStr, subStr);

    //eprintf("The substring is: %s\n", location);

    if(location) {
        printf("Substring located!\n");
        return 1;
    } else {
        printf("Substring not found!\n");
        return 0;
    }
}
