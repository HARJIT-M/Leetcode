int minimumSum(int num) {
    int sum=num;
    int n=num;
    for(int i=1;i<=3;i++)
    {
        int power = 1;
        for (int j = 0; j < i; j++)
        {
            power *= 10;
            int a = n % power;
            int b = n / power;
            int newsum = a + b;

            if (newsum < sum) 
            {
                sum = newsum;
            }
        }
    }
    return sum;
}