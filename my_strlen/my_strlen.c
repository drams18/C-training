#include <stdio.h>
#include <stdlib.h>

void my_putchar (char c);

int my_strlen(const char *str) {

    int i = 0;
    while (str[i] != '\0') {
        i++;
    }

    return i;
}

