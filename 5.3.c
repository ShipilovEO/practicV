#include <stdio.h>
#include <math.h>

int main() {
    int N;

    while (scanf("%d", &N) == 1)
    {
        double rez = 0;

        for(int i = 1; i <= N; i++)
        {
            double indx = i; 
            rez += pow(indx, 3);
        }
    printf("%f", rez);
    }
    return 0;
}
