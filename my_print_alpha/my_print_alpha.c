void my_putchar (char c);

void my_print_alpha (void) {
    char c = 97;
    while ( c <= 122) {
        my_putchar(c);
        c++;
    }
    my_putchar('\n');
}

