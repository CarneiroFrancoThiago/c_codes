#include <stdio.h>

int main()
{
    int som = 1, ultN = 1, penN = 0, novN = 0, k = 0;
    scanf("%i", &k);
    if(k < 3)
    {
        printf("-100");
    }
    else
    {
        k = k - 2;
        printf("%i/n%i", penN, ultN);
        while(k>0)
        {
            novN = penN + ultN;
            printf("\n%i", novN);
            som += novN;
            penN = ultN;
            ultN = novN;
            k--;
        }
    }
    printf("\n%i", som);
    
    return 0;
}
