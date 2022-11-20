#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, val;

    scanf("%i", &n);

    int matriz[n][n];

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
            {
               scanf("%i", &val);
               matriz[i][j] = val;
            }
    }


    int identidade = 1;
    int matzero = 1;

    for (i=0; (i<n)&&(matzero == 1); i++)
        {
        for(j=0; (j<n)&&(matzero == 1); j++)
        {
            if((i == j) && (matriz[i][j] != 0))
            {
                matzero = 0;
            }
            else if ((i != j) && (matriz[i][j] != 0))
            {
                matzero = 0;
            }
        }
    }

    for (i=0; (i<n)&&(identidade == 1); i++)
        {
            for(j=0; (j<n)&&(identidade == 1); j++)
                {
                    if((i == j) && (matriz[i][j] != 1))
                        {
                            identidade = 0;
                        }
                    else if ((i != j) && (matriz[i][j] != 0))
                        {
                            identidade = 0;
                        }
                }
        }

    for (i=0; i<n; i++)
        {
        for (j=0; j<n; j++)
            {
                printf("%i ", matriz[i][j]);
            }
        printf("\n");
        }

    if(identidade == 1)
        {
        printf("MATRIZ IDENTIDADE\n");
        }
    if(matzero == 1)
        {
            printf("MATRIZ ZERO\n");
        }

    int soma1 = 0;
    int soma2 = 0;

    for(i=0; i<n; i++){
        soma1 += matriz[i][i];
    }
    printf("Soma1 = " "%i\n", soma1);

    for (i=0; i<n; i++)
        {
        for (j=0; j<n; j++)
        {
            if(i+j == n-1)
            {
                soma2 += matriz[i][j];
            }
        }
        }
    printf("Soma2 = " "%i\n", soma2);

}
