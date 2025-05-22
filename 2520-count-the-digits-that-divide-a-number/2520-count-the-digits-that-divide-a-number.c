int countDigits(int num) {
    int count=0;
    int num1=num;
    while(num1>0)
    {
        int a=num1%10;
        if(a!=0 && num%a==0)
        {
            count+=1;
        }
        num1/=10;
    }
    return count;
}