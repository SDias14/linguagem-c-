
#include <stdio.h>

int main(void)
{
int matriz[3][3], i, j;
printf("\nDigite valores para a matriz: \n");
for (i=0 ; i<3 ; i++)
 for (j=0; j<3; j++)
 {
     printf("\nElementos[%d][%d] = ", i, j , matriz[i][j]
);
scanf("%d", &matriz[i][j]);

 }

    for (i=0 ; i<3 ; i++)
    for (j=0; j<3; j++)
    {
        printf("\nElementos[%d][%d] = %d\n", i, j , matriz[i][j]);
    
    }
    
  
    return 0;


}
