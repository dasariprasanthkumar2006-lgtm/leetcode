char* convertToBase7(int num) {
    static char res[20];
    int i = 0, j;

    if (num == 0) {
        res[i++] = '0';
        res[i] = '\0';
        return res;
    }

    int negative = num < 0;
    if (negative)
        num = -num;

    while (num > 0) {
        res[i++] = (num % 7) + '0';
        num /= 7;
    }

    if (negative)
        res[i++] = '-';

    res[i] = '\0';

    // reverse string
    for (j = 0; j < i / 2; j++) {
        char temp = res[j];
        res[j] = res[i - j - 1];
        res[i - j - 1] = temp;
    }

    return res;
}