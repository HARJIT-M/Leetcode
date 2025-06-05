/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize) {
     int *result = (int *)malloc(sizeof(int) * 2);
    *returnSize = 2;

    for (int w = (int)sqrt(area); w >= 1; w--) {
        if (area % w == 0) {
            int l = area / w;
            result[0] = l;
            result[1] = w;
            break;
        }
    }

    return result;
}