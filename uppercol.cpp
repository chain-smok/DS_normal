#include <stdio.h>
#include <stdlib.h> 
#define M 5 
#define N 5 
int main(void)
{ 
printf("===============�{���y�z=======================\n");
printf("= �{���W�١Gch2-8.1.c =\n");
printf("= �{���ت��G�W�T���x�}��@���x�}(�H�C���D) =\n"); 
printf("==============================================\n"); 
int Array_Data1[M][N] = 
{ 
{1, 2, 3, 4, 5},
{0, 6, 7, 8, 9},
{0, 0, 10, 11, 12},
{0, 0, 0, 13, 14},
{0, 0, 0, 0, 15}};
int Array_Data2[N*(1+N)/2] = {0}; //�����Ӽ�(�D0����)
int i, j, Location = 0; 
printf("==================��J========================\n"); 
printf("�W�T���x�}����l��ơG\n");
for(i = 0; i < M; i++) 
{ 
for(j = 0; j < N; j++)
{ 
printf("%4d", Array_Data1[i][j]); 
} 
printf("\n"); 
} 
for(j= 0; j < N; j++) 
{ 
for(i = 0; i < M; i++) 
{ 
if(Array_Data1[i][j] != 0) //�D0����
Array_Data2[Location++] = Array_Data1[i][j]; 
} 
}
printf("==================��X========================\n"); 
printf("�H�欰�D�G"); 
for(i = 0; i < N*(1+N)/2; i++) 
printf("%d ", Array_Data2[i]); 
printf("\n"); 
system("PAUSE");
return(0);
}