bool isSubsequence(char* s, char* t) {
    int i = 0, j = 0;
    int len1 = strlen(s), len2 = strlen(t);

    while (i < len1 && j < len2) {
        if (s[i] == t[j]) {
            i++;
        }
        j++;
    }
    return i == len1;
}