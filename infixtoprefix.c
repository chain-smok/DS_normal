#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxNum 20 //定義堆疊大小
char Stack[MaxNum] = {'0'}; //以陣列Stack當作堆疊
int InfixToPostfix(char []); //宣告中序轉後序
int Priority(char); //宣告決定運算子優先順序
int j=0,Top = -1; 
int length=sizeof(Stack) / sizeof(char);
int main(void) 
{ 
char itemset[20];
printf("===============程式描述================\n");
printf("= 程式名稱：ch3-3.5.c =\n");
printf("= 程式目的：中序轉前序 =\n"); 
printf("=======================================\n"); 
printf("=================輸入==================\n");
printf("請輸入中序運算式："); 
scanf("%s", itemset); 
printf("=================輸出==================\n"); 
InfixToPostfix(itemset); 
return (0); 
}
//中序轉後序之副程式
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
printf("長度:%d\n",i);*/
char op; 
printf("輸出前序式結果："); 
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
system("pause"); //使程式暫停在執行畫面
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
system("pause"); //使程式暫停在執行畫面
return (0);
*/

// 運算子堆疊
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
// 存入堆疊
if(Top < length) 
{ 
Top++; 
Stack2[Top] = op; 
} 
break;
// 遇 ) 輸出至 ( 
case '(': 
while(Stack2[Top] != ')') 
{ 
//printf("%c", Stack[Top]); 
Stack1[j]=Stack2[Top];
//printf("%c", Stack1[j]);
j++;
Top--; 
} 
Top--; // 不輸出( 
break; 
// 運算元直接輸出
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
