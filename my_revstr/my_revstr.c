

int my_strlen(const char *str) {

    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

char *my_revstr(char *str) {
    
    int len = my_strlen(str);
    int middle = len/2;
    char temp;

    for (int i = 0 ; i < middle; i++){
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return 0;
}

