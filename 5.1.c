#include <stdio.h>
#include <math.h>

double func(double X);
int main() {
    double rez;
    printf("итерация X\tY\n", rez);
    for(int i = 1; i <= 10; i ++)
    {
        double X = i;
        rez = func(X);
        printf("%d\t%.4f\t%.4f\n", i, X, rez);
    }
    return 0;
}

double func(double X)
{
    return pow(X, 1.0 / 3.0);
}