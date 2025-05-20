#include<string.h>
void reverseString(char* s, int sSize) {
    char* duplicate = (char*)malloc((sSize + 1) * sizeof(char));
    for (int i = 0; i < sSize; i++) {
        duplicate[i] = s[sSize - 1 - i]; 
    }
    duplicate[sSize] = '\0';
    for (int i = 0; i < sSize; i++) {
        s[i] = duplicate[i];
    }
    free(duplicate);
}