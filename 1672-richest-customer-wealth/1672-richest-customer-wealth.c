int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int maxsum=0;
    for(int i=0;i<accountsSize;i++)
    {
        int currentsum=0;
        for(int j=0;j<accountsColSize[i];j++)
        {
            currentsum+=accounts[i][j];
        }
        if(currentsum>maxsum)
        {
            maxsum=currentsum;
        }
    }
    return maxsum;
}