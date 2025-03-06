import java.util.*;
public class Solution {
    public int reverseBits(int n) {
        int count=31;
        int sum=0;
        for(int i=0;i<31;i++)
        {
            int a=n%2;
            sum+=(int)a*(int)(Math.pow(2,count));
            count-=1;
            n=n/2;
        }
        return sum;
    }
}