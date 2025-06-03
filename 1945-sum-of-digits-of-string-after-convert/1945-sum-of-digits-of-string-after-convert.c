
int sumOfDigits(char* str) {
    int sum = 0;
    for (int i = 0; str[i]; i++) {
        sum += str[i] - '0';
    }
    return sum;
}

int getLucky(char* s, int k) {
    char numStr[1000] = "";  
    char buffer[4];

    for (int i = 0; s[i]; i++) {
        int val = s[i] - 'a' + 1;
        sprintf(buffer, "%d", val);
        strcat(numStr, buffer);
    }

    while (k-- > 0) {
        int sum = sumOfDigits(numStr);
        sprintf(numStr, "%d", sum); 
    }

    return atoi(numStr);
}
