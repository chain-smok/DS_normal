#include <stdio.h>
#include <stdlib.h>
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
printf("= �{���W�١Gch3-3.6.c =\n");
printf("= �{���ت��G��ǹB�� =\n"); 
printf("=======================================\n"); 
printf("=================��J==================\n"); 
while(1) {
printf("�п�J�@�ӫ�Ǧ�:");
gets(itemset);
printf("%s = %d\n",itemset,Transfer(itemset));
}
system("pause"); //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
return (0);
}
int Transfer(char itemset[]) //��ǹB�⦡���Ƶ{��
{ 
printf("�B�⵲�G�G"); 
char *pt=itemset;
int opd1,opd2;
while(*pt) { 
if(*pt >= '0' && *pt <= '9')
Push(*pt-'0');
else {
opd2=Pop(); //�ĤG�ӹB�⤸
opd1=Pop(); //�Ĥ@�ӹB�⤸
switch(*pt) {
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
pt++; } 
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
