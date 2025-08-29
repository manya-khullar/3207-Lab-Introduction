#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char randchar(){
    char randomChar = 'A' + (rand() % 26);
    return randomChar;
}
// This returns a random character from A - Z