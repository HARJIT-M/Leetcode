/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
     *returnSize = 2;
    double* result = (double*) malloc(sizeof(double) * (*returnSize));
    result[0] = celsius + 273.15;
    result[1] = celsius * 9.0 / 5.0 + 32;
    return result;
}