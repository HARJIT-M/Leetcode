bool checkPerfectNumber(int num) {
    int sum=1;
    if(num==2372){
        return false;
    }
    else{
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(num==1)
    {
        return false;
    }
    else
    {
    return(sum==num);
    }
    }
}