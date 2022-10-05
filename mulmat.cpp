#include <stdio.h>
#include <stdlib.h>
//��XA�x�}
void matrix_Aprint(int m, int n, int **A)
{
     printf("��XA�x�}�G");
     printf("\n");                     
     int i, j;
     for(i = 0; i < m; i++){
       for(j = 0; j < n; j++)
         printf("%3d ", A[i][j]);
       printf("\n");
     }  
       printf("\n");
}

//��XB�x�}
void matrix_Bprint(int m, int n, int **B)
{
     printf("��XB�x�}�G");
     printf("\n");                     
     int i, j;
     for(i = 0; i < m; i++){
       for(j = 0; j < n; j++)
         printf("%3d ", B[i][j]);
       printf("\n");
     }
       printf("\n");     
}

/*���]A,B,C����mxn�}�C�A�o�Ө�ƭn�D�XC=A*B*/
void matrix_Mul(int m,int p,int n,int **A,int **B,int **C)
{
  int i, j, k;
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
      {
        C[i][j]=0;
        for(k=0;k<p;k++)
          C[i][j] = C[i][j] + A[i][k] * B[k][j]; 
      }
}

//��X�ۭ����G
void matrix_Cprint(int m, int n, int **C)
{
     printf("��XA*B=C�����G�G");
     printf("\n");             
     int i, j;
     for(i = 0; i < m; i++){
       for(j = 0; j < n; j++)
         printf("%3d ", C[i][j]);
       printf("\n");
     }
}
int main()
{
     printf("===============�{���y�z=======================\n");
     printf("= �{���W�١Gch2-7.3.c                        =\n");
     printf("= �{���ت��G2�ӯx�}�ۭ�                      =\n"); 
     printf("==============================================\n"); 
     int A[1][3] = {{1, 2, 3}};
     int *t[1]={A[0]};
     int B[3][4] = {{1, 0, 1,7}, {1, 1, 0,9}, {0, 1, 1,11}};
     int *a[3]={B[0],B[1],B[2]};
     int C[1][4];
     int *z[1]={C[0]};
     //��ӯx�}�ۭ� 
     printf("==================��J========================\n"); 
     matrix_Aprint(1,3,t);         //��XA�x�}
     matrix_Bprint(3,4,a);         //��XB�x�}  
     matrix_Mul(1, 3, 4,t,a,z);   //C=A*B
     printf("==================��X========================\n"); 
     matrix_Cprint(1, 4,z);      //��Xc�x�} 
     system("PAUSE");
     return 0;
}

 