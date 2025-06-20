import java.util.*;

class Solution {
    public int numRescueBoats(int[] people, int limit) {
        Arrays.sort(people);
        int i = 0;             
        int j = people.length - 1; 
        int count = 0;

        while (i <= j) {
            if (people[i] + people[j] <= limit) {
                count++;
                j--;
                i++;
            }
            else
            {
            j--;
            count+=1;
            }
        }

        return count;
    }
}