#include <stdio.h>
#include <math.h>
#include <stdio.h>

double calc(double a, double b);
int main() {  
    double calculo, a, b;
    while(scanf("%lf %lf", &a, &b) == 2)
    {
        calculo = calc(a, b);
        printf("%.4f", calculo);
    }
    return 0;
}

double calc(double a, double b) {
    return (pow(a, 2) + pow(b, 2)) / (a * b);
}