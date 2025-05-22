bool check(int n) {
    int sum = 0;
    while (n) {
        int x = n % 10;
        sum += x;
        n /= 10;
    }
    return sum % 2 == 0 ? 1 : 0;
}
int countEven(int num) {
    int cnt = 0;
    for (int i = 1; i <= num; i++) {
        if (check(i))
            cnt++;
    }
    return cnt;
}