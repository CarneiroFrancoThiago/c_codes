#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,x,y,z;
    scanf("%i" "%i" "%i", &a, &b, &c);
    scanf("%i" "%i" "%i", &x, &y, &z);
    if (a < 1 || b < 1 || c < 1 || x < 1 || y < 1 || z < 1){
        printf("ERRO");
    }
    else
    {
    printf("%i", (x/a)*(y/b)*(z/c));
    
    return 0;
    }
}
