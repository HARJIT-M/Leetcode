int sumOfTheDigitsOfHarshadNumber(int x) {
    int dup=x;
    int sum=0;
    while(dup>0)
    {
        sum += dup % 10;
        dup/=10;
    }
    if(x%sum==0)
    {
        return sum;
    }
    else
    {
    return -1;
    }
}