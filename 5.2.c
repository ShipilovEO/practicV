#include <stdio.h>
#include <math.h>

int main() {
    char *str = "&&&& & & & &&&&";
    int k;
    for(int i = 0; i <= 4; i ++)
    {
        for(int j = 0; j <= 2; j++)
        {
            k = i * 3 + j;
            printf("%c", str[k]);
        }
    printf("\n");
    }
}