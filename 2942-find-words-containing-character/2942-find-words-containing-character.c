/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int *result=(int*)malloc(wordsSize*sizeof(int));
    int count=0;
    for(int i=0;i<wordsSize;i++)
    {
        for(int j=0;words[i][j]!='\0';j++)
        {
            if(words[i][j]==x)
            {
                result[count++]=i;
                break;
            }
        }
    }
    *returnSize=count;
    return result;
}