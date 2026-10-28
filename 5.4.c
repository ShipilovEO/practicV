#include <stdio.h>
#include <math.h>
#include <stdio.h>

int main() {
    double arr[8];
    double pell;
    for (int i = 0; i < 8; i++) 
    { 
    arr[i] = i + 1; 
    printf("%.2f ", arr[i]);
    }

    printf("\n");

    for(int i = 1; i < 8; i++)
    {
        pell = ((pow((1 + pow(2, 0.5)), i) - pow((1 - pow(2, 0.5)), i)) / (2 * pow(2, 0.5)));
        arr[i] = pell;
    }

    for(int j = 1; j < 8; j++)
    {
        printf("%.2f ", arr[j]);
    } 

    float max = arr[0];
    for(int k = 1; k < 8; k++)
    {
        if (arr[k] > max)
            max = arr[k];
    }
    printf("\n %.2f", max);
    return 0;
}