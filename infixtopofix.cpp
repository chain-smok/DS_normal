#include <stdio.h>
#include <stdlib.h>
#define MaxNum 20 //�w�q���|�j�p
char Stack[MaxNum] = {'0'}; //�H�}�CStack��@���|
int InfixToPostfix(char []); //�ŧi��������
int Priority(char); //�ŧi�M�w�B��l�u������
int i = 0, Top = -1; 
int length=sizeof(Stack) / sizeof(char);
int main(void) 
{ 
char itemset[20];
printf("===============�{���y�z================\n");
printf("= �{���W�١Gch3-3.4.c =\n");
printf("= �{���ت��G�������� =\n"); 
printf("=======================================\n"); 
printf("=================��J==================\n");
printf("�п�J���ǹB�⦡�G"); 
scanf("%s", itemset); 
printf("=================��X==================\n"); 
InfixToPostfix(itemset); 
return (0); 
}
//�������Ǥ��Ƶ{��
int InfixToPostfix(char Stack[]) 
{ 
char op; 
printf("��X��Ǧ����G�G"); 
while(1) 
{ 
op = Stack[i]; 
switch(op) 
{ 
case '\0': 
while(Top >=0) 
{ 
printf("%c", Stack[Top]); 
Top--; 
} 
printf("\n"); 
system("pause"); //�ϵ{���Ȱ��b����e��
return (0);
// �B��l���|
case '(': 
if(Top < length)
{ 
Top++; 
Stack[Top] = op; 
} 
break; 
case '+': case '-': case '*': case '/':
while(Priority(Stack[Top]) >= Priority(op)) 
{ 
printf("%c", Stack[Top]); 
Top--; 
} 
// �s�J���|
if(Top < length) 
{ 
Top++; 
Stack[Top] = op; 
} 
break;
// �J ) ��X�� ( 
case ')': 
while(Stack[Top] != '(') 
{ 
printf("%c", Stack[Top]); 
Top--; 
} 
Top--; // ����X( 
break; 
// �B�⤸������X
default: 
printf("%c", op); 
break; 
} 
i++; 
}
} 

int Priority(char op) 
{ 
int p; 
switch(op) 
{ 
case '+': case '-': 
p = 1; 
break; 
case '*': case '/': 
p = 2; 
break; 
default: 
p = 0; 
break; 
} 
return p;
} 
