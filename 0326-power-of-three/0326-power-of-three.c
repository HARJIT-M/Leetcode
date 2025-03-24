

bool isPowerOfThree(int n) {
    if (n <= 0) return false;
    int flag = 0;
    for (int i = 0; pow(3, i) <= n; i++) { 
        if (pow(3, i) == n) { 
            flag = 1;
            break;
        }
    }
    
    if (flag == 1) {
        return true;
    } else {
        return false;
    }
}
