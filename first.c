
#include <stdio.h>

int main(void)
{
int matriz[3][3] ={ {10,20,30}, {40,50,60}, {70,80,90}} , i, j;

for (i=0 ; i<3 ; i++)
 for (j=0; j<3; j++)
 {
     printf("\nElementos[%d][%d] = %d\n", i, j , matriz[i][j]);

 }

 return 0;

}
