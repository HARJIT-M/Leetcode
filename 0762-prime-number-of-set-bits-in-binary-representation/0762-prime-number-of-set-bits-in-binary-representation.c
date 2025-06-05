int countone(int n) {
    int count = 0;
    while (n > 0) {
        if (n % 2 == 1)
            count++;
        n = n / 2;
    }
    return count;
}
int isprime(int num) {
    if (num < 2)
        return 0;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int countPrimeSetBits(int left, int right) {
    int ocount=0;
    for(int i=left;i<=right;i++)
    {
        int num = countone(i);
        if(isprime(num))
        {
            ocount+=1;
        }
    }
    return ocount;
}