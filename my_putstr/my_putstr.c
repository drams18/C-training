void my_putchar (char c);

int my_putstr(const char *str) {

    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return i;
}


