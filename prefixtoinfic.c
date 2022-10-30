#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxNum 10 //定義堆疊大小
int Stack[MaxNum]; //以陣列Stack當作堆疊
int Top = -1; //Top紀錄目前堆疊頂端的索引值，初始值設為-1表示堆疊為空
void Push(int); //宣告Push副程式
int Pop(void); //宣告Pop副程式
int Transfer(char*); //宣告後序運算式之副程式
char itemset[MaxNum];
int main(void) //主程式
{
printf("===============程式描述================\n");
printf("= 程式名稱：ch3-3.11.c =\n");
printf("= 程式目的：前序運算 =\n"); 
printf("=======================================\n"); 
printf("=================輸入==================\n"); 
while(1) {
printf("請輸入一個前序式:");
gets(itemset);
printf("%s = %d\n",itemset,Transfer(itemset));
}
system("pause"); //使程式暫停在執行畫面讓我們看到結果
return (0);
}
int Transfer(char itemset[]) //後序運算式之副程式
{ 
printf("運算結果："); 
int opd1,opd2,i;
i=strlen(itemset)-1;
while(i!=-1) { 
if(itemset[i] >= '0' && itemset[i] <= '9')
Push(itemset[i]-'0');
else {
opd1=Pop(); //第一個運算元
opd2=Pop(); //第二個運算元
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
//將資料加入堆疊
void Push(int n) //Push副程式
{
if(Top == MaxNum -1) {
printf("堆疊已滿！");
return;
}
Stack[++Top] = n;
}
//取出堆疊資料
int Pop(void) //Pop副程式
{
if(Top == -1) {
printf("堆疊是空！");
return 0;
}
return Stack[Top--];
}
