#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i;

    char texto[150] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' '};
    char crip;
    fgets(texto, 150, stdin);

    for(i=0; texto[i] > 27; i++){
        crip = texto[i];
        if (crip >= 'a' && crip <= 'z'){
            crip = crip + 4;
            if(crip > 'z'){
                crip = crip - 26;
            }
            texto[i] = toupper(crip);
        }
    }
    printf("%s", texto);

    return 0;
}
