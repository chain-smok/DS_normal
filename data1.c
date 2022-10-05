#include <stdio.h>
#include <stdlib.h>
int main()
{  
 printf("===============程式描述=======================\n");
 printf("= 程式名稱：ch2-2.2a.c                       =\n");
 printf("= 程式目的：使用陣列，但未使用for迴圈演算法  =\n"); 
 printf("==============================================\n"); 
 //宣告
 int A[6]= {10,21,32,43,56,78};
 int sum;
 //處理
 sum = 0;
 for(int i=0;i<6;i++)
 {
  sum+=A[i];
 }
 //輸出
 printf("總和為：%3d",sum); 
 printf("\n");      
 return 0;
}

