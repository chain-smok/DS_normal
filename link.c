#include <stdio.h>
#include <stdlib.h>
typedef struct node
 {
    int data;
    struct node *link;
 }NODE;
NODE *NewNode(void);
int main(void)
 {
   printf("===============�{���y�z====================\n");
   printf("= �{���W�١Gch5-5.1.c                     =\n");
   printf("= �{���ت��G�ʺA�t�m��V�쵲��C�@�Ӹ`�I  =\n"); 
   printf("===========================================\n");   
   int a=10;            
   int Node_data;
   NODE *list;
   list=NewNode();
   printf("=================��J======================\n");    
   printf("�п�J��@�`�I���e�G");
   scanf("%d",&Node_data);
   (*list).data=Node_data;
   (*list).link=NULL;
   printf("=================��X======================\n");  
   printf("�`�I���e���G%d\n",list->data);        //�L�X��C������椧���e
   system("PAUSE");             //�ΨӪ�ܼȰ�
   return(0);                        
 }
 
NODE *NewNode(void)  //�إߤ@�ӷs�`�I
{
  NODE *pt;
  pt = (NODE*)malloc(sizeof(NODE));  //�ʺA�O����t�m 
  if(pt== NULL ) {
    printf("�O����Ŷ�����!");
    exit(1);
  }
  return pt;
}
