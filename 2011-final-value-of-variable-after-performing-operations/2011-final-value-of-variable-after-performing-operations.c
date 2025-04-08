int finalValueAfterOperations(char** operations, int operationsSize) {
    int a=0;
    for(int i=0;i<operationsSize;i++)
    {
        if(operations[i][1]=='+' )
        {
            a+=1;
        }
        else if(operations[i][1]=='-')
        {
            a-=1;
        }
    }
    return a;
}