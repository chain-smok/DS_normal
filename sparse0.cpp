#include <stdio.h>
#include <stdlib.h>
//??X?}???x?}
void Sparse_print(int m, int n, int **Sparse)
{
printf("??J?}???x?}?G");
printf("\n");
int i, j;
for(i = 0;i < m; i++){
for(j = 0; j < n; j++)
printf("%3d ", Sparse[i][j]);
printf("\n");
}
} 
//???Y?B?z
void Compress_process(int m, int n, int **Sparse, int **Compress)
{
int i,j,k;
k = 1; // ?]?w?????
Compress[0][0] = m; // ?}?Csparse??m?C
Compress[0][1] = n; // ?}?Csparse??n??
Compress[0][2] = 5; // ?}?C???5?????
for ( i = 0; i < m; i++ ) // ?G???}?C?????X
for ( j = 0; j < n; j++ )
if ( Sparse[i][j] != 0 ) // ?P?_?O?_???D0????
{
Compress[k][0] = i; // ?x?s?C??
Compress[k][1] = j; // ?x?s???
//?x?s??????
Compress[k][2] = Sparse[i][j];
k++; // ?U?@?C
}
}
//??X???Y???G
void Compress_print(int m, int n, int **Compress)
{
printf("??X???Y???G?G");
printf("\n"); 
int i, j;
for(i = 0; i < m; i++){
for(j = 0; j < n; j++)
printf("%3d ", Compress[i][j]);
printf("\n");
}
}

int main()
{
int Sparse[4][3] = {{5, 0, 0}, {0, 0, -1}, {3, 0, 0}, {0, 9, 10}};
int *o[4]={Sparse[0],Sparse[1],Sparse[2],Sparse[3]};
int Compress[6][3];
int *t[6]={Compress[0],Compress[1],Compress[2],Compress[3],Compress[4],Compress[5]};
//???x?}??[
printf("===============?{???y?z=======================\n");
printf("= ?{???W??Gch2-7.4.c =\n");
printf("= ?{??????G?N?@?}???x?}???????Y??????k =\n"); 
printf("==============================================\n"); 
Sparse_print(4,3,o); //??J?}???x?}
Compress_process(4, 3, o, t); //???Y?B?z
Compress_print(6, 3, t); //??X???Y???G
system("PAUSE");
return(0);
}
