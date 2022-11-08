#include <stdio.h>
#include <stdlib.h>
typedef struct node {
  int data;
  struct node *link;
} NODE;
NODE *NewNode(void);       //�ŧi�إ߷s�`�I 
void PrintLists(NODE*);    //�ŧi�C�L��өΨ�ӥH�W��C�����e 
int main(void)
{   
    printf("===============�{���y�z====================\n");
    printf("= �{���W��:ch5-5.2.c                     =\n");
    printf("= �{���ت��G��өΨ�ӥH�W�`�I���쵲��C  =\n"); 
    printf("===========================================\n");      
    int i;
    char choice;
    NODE *head,*temp;      //�ŧihead,temp�����V���cNODE������ 
    head = NewNode( );     //���t�s�`�I�Ŷ� 
    temp = head;           //��ӫ��Ы��V�P�@�Ӹ`�I 
    printf("=================��J======================\n");     
    printf("�п�J��C��1�Ӹ������:");
    scanf("%d",&head->data);
    for(i=1;i<=4;i++) 
    {
      printf("�п�J��C��%d�Ӹ������:",i+1);
      temp->link = NewNode( );  //�I�s�إ߷s�`�I 
      scanf("%d",&temp->link->data);
      temp = temp->link;
    }
    temp->link = NULL;
    printf("=================��X======================\n");      
    PrintLists(head);   //�I�s�C�L��өΨ�ӥH�W��C�����e
    while(head != NULL) {
      NODE *temp;
      temp = head;
      head = head->link;
      free(temp);
    }
  system("pause");     //�ϵ{���Ȱ��b����e��
  return 0;
}
NODE *NewNode(void)  //�إ߷s�`�I���Ƶ{�� 
{
  NODE *pt;
  pt = (NODE*)malloc(sizeof(NODE));
  if(pt== NULL ) {
    printf("�O����Ŷ�����!");
    exit(1);
  }
  return pt;
}

void PrintLists(NODE* head)  //�C�L��өΨ�ӥH�W��C�����e���Ƶ{�� 
{
  NODE *temp=head;
  printf("�쵲��C���G");        //�L�X��C������椧���e
  while(temp != NULL)
  {
    printf("%d ",temp->data);
    temp = temp->link;
  }
  printf("\n");
}
