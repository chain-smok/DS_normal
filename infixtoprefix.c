#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxNum 20 //�w�q���|�j�p
char Stack[MaxNum] = {'0'}; //�H�}�CStack��@���|
int InfixToPostfix(char []); //�ŧi��������
int Priority(char); //�ŧi�M�w�B��l�u������
int j=0,Top = -1; 
int length=sizeof(Stack) / sizeof(char);
int main(void) 
{ 
char itemset[20];
printf("===============�{���y�z================\n");
printf("= �{���W�١Gch3-3.5.c =\n");
printf("= �{���ت��G������e�� =\n"); 
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

char Stack1[100]= {'0'};
char Stack2[100]= {'0'};
int i,k;
i=k=strlen(Stack)-1;
/*for(int z=k;z>=0;z--){
    printf("%c",Stack[z]);
}*/

/*printf("\n");
printf("����:%d\n",i);*/
char op; 
printf("��X�e�Ǧ����G�G"); 
while(1) 
{ 
/*printf("\n");
printf("i:%d\n",i);*/
if(i==-1){ 
/*
while(Top >=0) 
{ 
printf("%c", Stack[Top]); 

Top--; 
} 
printf("\n"); 
system("pause"); //�ϵ{���Ȱ��b����e��
*/
for(int l=0;l<=Top;l++){
    printf("%c",Stack2[l]);
}
for(int m=k;m>=0;m--){
    printf("%c",Stack1[m]);
}
printf("\n"); 
return (0);}

op = Stack[i]; 
/*printf("op:%c\n",op);*/
switch(op) 
{ 
/*
case '\0': 
while(Top >=0) 
{ 
printf("%c", Stack[Top]); 
Top--; 
} 
printf("\n"); 
system("pause"); //�ϵ{���Ȱ��b����e��
return (0);
*/

// �B��l���|
case ')': 
if(Top < length)
{ 
Top++; 
Stack2[Top] = op; 

} 
break; 
case '+': case '-': case '*': case '/':
while(Priority(Stack2[Top]) > Priority(op)) 
{ 
//printf("%c", Stack[Top]); 
Stack1[j]=Stack2[Top];
//printf("%c", Stack1[j]);
j++;
Top--; 
} 
// �s�J���|
if(Top < length) 
{ 
Top++; 
Stack2[Top] = op; 
} 
break;
// �J ) ��X�� ( 
case '(': 
while(Stack2[Top] != ')') 
{ 
//printf("%c", Stack[Top]); 
Stack1[j]=Stack2[Top];
//printf("%c", Stack1[j]);
j++;
Top--; 
} 
Top--; // ����X( 
break; 
// �B�⤸������X
default: 
//printf("%c", op); 
Stack1[j]=op;
//printf("%c", Stack1[j]);
j++;
break; 
} 
i--; 
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
