#include<stdio.h>

int main(){
    
    int n, r, id, i;
    
    scanf("%i", &n);
    scanf("%i", &r);
    
    if(n==r)
    {
        printf("*\n");
    }
    if(n<1||r<1)
    {
        printf("ERRO\n");
        return(0);
    }
    int b[n];
    for(i=1; i <= r; i++)
    {
        scanf("%i", &id);
        b[id] = 1;
    }
    for(i=1; i <= n; i++)
    {
        if(b[i]!=1)
        {
            printf("%i\n", i);
        }
    }
    
    
	return 0;
}
