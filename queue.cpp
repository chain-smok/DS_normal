#include <stdio.h>
#include <stdlib.h>
int item;
void Enqueue(int item);
int Dequeue(void); 
void PrintQueue(void); //�ŧi�C�L�ثe��C�����e���Ƶ{��
typedef struct queue {
int Q[100000];
int Rear;
int Front;
} Queue;
Queue qu;
int main(void) //�D�{��
{
int item;
int op=0;
qu.Rear = -1;
qu.Front = -1;
printf("===============�{���y�z=======================\n");
printf("= �{���W�١Gch4-2.c =\n");
printf("= �{���ت��G�ϥΦ�C�i��Enqueue�H��Dequeue =\n"); 
printf("==============================================\n"); 
while(1)
{
printf("==============================================\n");
printf("= 1.Enqueue(�[�J) =\n");
printf("= 2.Dequeue(�R��) =\n");
printf("= 3.��ܥثe��C�����e =\n");
printf("= 4.���� =\n"); 
printf("==============================================\n");
printf("�п�J�A���ާ@�G");
scanf("%d",&op);
switch(op)
{
case 1: printf("�п�J�A�n�[�J�����:");
scanf("%d",&item);
Enqueue(item); //�I�sEnqueue�Ƶ{��
break;
case 2: item = Dequeue( ); //�I�sDequeue�Ƶ{��
if(item != -1)
printf("%d �O�q��C�R�������\n",item);
break;
case 3: PrintQueue( ); //�I�sPrintQueue�Ƶ{��
break;
case 4: printf("\n"); //����
return (0); 
}
}
system("pause"); //�ϵ{���Ȱ��b����e��
return (0);
}
//��ƥ[�J��C
void Enqueue(int item) //Enqueue�Ƶ{��
{
if(qu.Rear == sizeof(qu.Q)/sizeof(int)-1) {
printf("��C�O����!\n");
return;
} else
qu.Q[++qu.Rear] = item;
}
//��Ʊq��C�R��
int Dequeue(void) //Dequeue�Ƶ{��
{
if(qu.Front == qu.Rear) {
printf("��C�O�Ū�!\n");

return -1;
} else
return qu.Q[++qu.Front];
}
//�C�L�ثe��C�����e
void PrintQueue(void) //�C�L�ثe��C�����e���Ƶ{��
{
int i;
printf("�ثe��C�����e�G");
for(i=qu.Rear;i>=qu.Front+1;i--)
printf("%d ",qu.Q[i]);
printf("\n"); 
}
