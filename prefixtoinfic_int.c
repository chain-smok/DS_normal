#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxNum 10 //�w�q���|�j�p
int Stack[MaxNum]; //�H�}�CStack��@���|
int Top = -1; //Top�����ثe���|���ݪ����ޭȡA��l�ȳ]��-1��ܰ��|����
void Push(int); //�ŧiPush�Ƶ{��
int Pop(void); //�ŧiPop�Ƶ{��
int Transfer(char*); //�ŧi��ǹB�⦡���Ƶ{��
char itemset[MaxNum];
int main(void) //�D�{��
{
printf("===============�{���y�z================\n");
printf("= �{���W�١Gch3-3.11.c =\n");
printf("= �{���ت��G�e�ǹB�� =\n"); 
printf("=======================================\n"); 
printf("=================��J==================\n"); 
while(1) {
printf("�п�J�@�ӫe�Ǧ�:");
gets(itemset);
printf("%s = %d\n",itemset,Transfer(itemset));
}
system("pause"); //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
return (0);
}
int Transfer(char itemset[]) //��ǹB�⦡���Ƶ{��
{ 
printf("�B�⵲�G�G"); 
int opd1,opd2,i;
i=strlen(itemset)-1;
while(i!=-1) { 
if(itemset[i] >= '0' && itemset[i] <= '9')
Push(itemset[i]-'0');
else {
opd1=Pop(); //�Ĥ@�ӹB�⤸
opd2=Pop(); //�ĤG�ӹB�⤸
switch(itemset[i]) {
case '+': Push(opd1 + opd2);
break; 
case '-': Push(opd1 - opd2);
break;
case '*': Push(opd1 * opd2);
break;
case '/': Push(opd1 / opd2);
break;
default: return -1;
}
}
i--; } 
return Pop( ); }
//�N��ƥ[�J���|
void Push(int n) //Push�Ƶ{��
{
if(Top == MaxNum -1) {
printf("���|�w���I");
return;
}
Stack[++Top] = n;
}
//���X���|���
int Pop(void) //Pop�Ƶ{��
{
if(Top == -1) {
printf("���|�O�šI");
return 0;
}
return Stack[Top--];
}
