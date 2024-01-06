void my_putchar (char c);

void my_print_revalpha (void) {
    char c = 122;
    while ( c >= 97) {
        my_putchar(c);
        c--;
    }
}

