#include <stdio.h>
#include <stdlib.h>
#define MaxNum 5 //�w�q���|�j�p
int Stack[MaxNum]; //�H�}�CStack��@���|
int Top = -1; //Top�����ثe���|���ݪ����ޭȡA��l�ȳ]��-1��ܰ��|����
void Push(int item){
  if(Top==MaxNum-1)
   printf("stack is full.\n");
  else{
    Stack[++Top]=item;
  }
}; //�ŧiPush(�[�J)�Ƶ{��
int Pop(int item){
    if(Top==-1){
        printf("stack is empty.\n");
    }
    else{
        item=Stack[Top];
        Top-=1;
        return item;
    }
    
}; //�ŧiPop(���X)�Ƶ{��
void PrintStack(){
     if(Top==-1){
        printf("stack is empty.\n");
    }
    for(int i=0;i<MaxNum;i++){
        printf("%d ",Stack[i]);
    }
    printf("\n");
}; //�ŧi�C�L�ثe���|�����e���Ƶ{��
int main(void) //�D�{��
{
int op=0,item; 
printf("===============�{���y�z=======================\n");
printf("= �{���W�١Gch3-2.c =\n");
printf("= �{���ت��G�ϥΰ��|�i��push�H��pop =\n"); 
printf("==============================================\n"); 
while(1)
{
printf("==============================================\n");
printf("= 1.push(�[�J) =\n");
printf("= 2.pop(���X) =\n");
printf("= 3.��ܥثeStack�����e(�q�ѤW�ӤUTop-Down)=\n");
printf("= 4.���� =\n"); 
printf("==============================================\n");
printf("�п�J�A���ާ@�G");
scanf("%d",&op);
switch(op)
{
case 1: printf("�п�J�A�npush(�[�J)����ơG");
scanf("%d",&item);
Push(item); //�I�sPush�Ƶ{��
break;
case 2: printf("%d �O�q���|�upop(���X)�����\n",Pop(item)); //�I�sPop�Ƶ{��
break;
case 3: PrintStack( ); //��ܥثeStack�����e
break;
case 4: printf("\n"); //����
return (0); 
}
}
system("pause"); //�ϵ{���Ȱ��b����e��
return (0);
}