int reverse(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

bool isSameAfterReversals(int num) {
    if (num == 0) return true; // edge case: zero reversed twice is zero

    int rev1 = reverse(num);
    int rev2 = reverse(rev1);

    return num == rev2;
}