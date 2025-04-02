int addDigits(int num) {
    while(num>=10)
    {
        int sum=0;
        while(num>0)
        {
            int s=num%10;
            sum+=s;
            num/=10;
        }
        num=sum;
    }
    return num;

}