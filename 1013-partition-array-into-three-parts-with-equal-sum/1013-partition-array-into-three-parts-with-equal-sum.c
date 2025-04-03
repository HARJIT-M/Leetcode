bool canThreePartsEqualSum(int* arr, int arrSize) {
    int mainsum=0;
    int sum1=0;
    int sum2=0;
    int sum3=0;
    for(int i=0;i<arrSize;i++)
    {
        mainsum+=arr[i];
    }
    if(mainsum%3!=0)
    {
        return false;
    }
    int a = mainsum / 3;
    int tempsum = 0;
    int count = 0;
    for (int i = 0; i < arrSize; i++) {
        tempsum += arr[i];

        if (tempsum == a) {
            count++;
            tempsum = 0;
        }
    }
    return count>=3;
}