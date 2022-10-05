#include <stdio.h>
#include <stdlib.h>
//輸出A矩陣
void matrix_Aprint(int m, int n, int **A)
{
     printf("輸出A矩陣：");
     printf("\n");                     
     int i, j;
     for(i = 0; i < m; i++){
       for(j = 0; j < n; j++)
         printf("%3d ", A[i][j]);
       printf("\n");
     }  
       printf("\n");
}

//輸出B矩陣
void matrix_Bprint(int m, int n, int **B)
{
     printf("輸出B矩陣：");
     printf("\n");                     
     int i, j;
     for(i = 0; i < m; i++){
       for(j = 0; j < n; j++)
         printf("%3d ", B[i][j]);
       printf("\n");
     }
       printf("\n");     
}

/*假設A,B,C均為mxn陣列，這個函數要求出C=A*B*/
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

//輸出相乘結果
void matrix_Cprint(int m, int n, int **C)
{
     printf("輸出A*B=C的結果：");
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
     printf("===============程式描述=======================\n");
     printf("= 程式名稱：ch2-7.3.c                        =\n");
     printf("= 程式目的：2個矩陣相乘                      =\n"); 
     printf("==============================================\n"); 
     int A[1][3] = {{1, 2, 3}};
     int *t[1]={A[0]};
     int B[3][4] = {{1, 0, 1,7}, {1, 1, 0,9}, {0, 1, 1,11}};
     int *a[3]={B[0],B[1],B[2]};
     int C[1][4];
     int *z[1]={C[0]};
     //兩個矩陣相乘 
     printf("==================輸入========================\n"); 
     matrix_Aprint(1,3,t);         //輸出A矩陣
     matrix_Bprint(3,4,a);         //輸出B矩陣  
     matrix_Mul(1, 3, 4,t,a,z);   //C=A*B
     printf("==================輸出========================\n"); 
     matrix_Cprint(1, 4,z);      //輸出c矩陣 
     system("PAUSE");
     return 0;
}

 