class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        int i = 0;
        int len = flowerbed.length;

        while (i < len) 
        {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) &&
               (i == len - 1 || flowerbed[i + 1] == 0)) 
               {
                flowerbed[i] = 1;
                n--; 
                if (n == 0) return true;
                i += 2;
            }
            else 
            {
                i++;
            }
        }
        return n <= 0;
    }
}