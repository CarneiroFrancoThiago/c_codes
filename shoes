#include <stdio.h>

int main(){
    
    int n = 0, conjunto = 0, resultados[100], pares;
    
    while(n != -33)
    {
        scanf("%i", &n);
        if(n != -33)
        {
            pares = 0;
            int tam[n];
            char pe[n];
            for(int i = 0; i < n; i++)
            {
                scanf("%i %c", &tam[i], &pe[i]);
            }
            for(int i = 0; i < n; i++)
            {
                for(int j = i+1; j < n; j++)
                {
                    if(tam[j] != 0 && tam[i] == tam [j] && pe[i] != pe[j])
                    {
                        pares++;
                        tam[j] = 0;
                        tam[i] = 0;
                    }
                }
            }
            resultados[conjunto] = pares;
            conjunto++;
        }
    }
    for(int i = 0; i < conjunto; i++)
    {
        printf("%i \n", resultados[i]);
    }
}
