
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *my_putchar (char c);


int my_getnbr(const char *str) {
    
    int i = 0;
    
        for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') { //expression booléenne qui évalue si le caractère str[i] est un chiffre.(à utilisé si utilisation de la table ascii.)
        my_putchar(str[i]);
        }
    }
  return 0;
}

