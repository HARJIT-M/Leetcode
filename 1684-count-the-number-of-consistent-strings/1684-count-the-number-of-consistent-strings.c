int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    int allowedMap[26] = {0};
    int count = 0;
    for (int i = 0; allowed[i]; i++) 
    {
        allowedMap[allowed[i] - 'a'] = 1;
    }
    for (int i = 0; i < wordsSize; i++) 
    {
        int j;
        for (j = 0; words[i][j]; j++) 
        {
            if (!allowedMap[words[i][j] - 'a']) 
            {
                break;
            }
        }
        if (words[i][j] == '\0') 
        {
            count++;  
        }
    }
    return count;
}