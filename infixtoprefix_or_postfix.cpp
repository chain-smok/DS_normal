#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    char value;
    Node* link;
}Node;

typedef struct Stack{
    Node* top;
}Stack;

void push(Stack* This, char ch){
    Node* newp = new Node{ch, This->top};
    This->top = newp;
}

char pop(Stack* This){
    char res;
    Node* temp = This->top;
    This->top = temp->link;
    res = temp->value;
    free(temp);
    return res;
}

char top(Stack* This){
    return (This->top == NULL)? '\0': This->top->value;
}

int empty(Stack* This){
    return (This->top == NULL)? true: false;
}

int priority(char x){
    switch(x){
        case '^':           return 3;
        case '*': case '/': return 2;
        case '+': case '-': return 1;
        default:            return 0;
    }
}

char* infixToPostfix(char str[100]){
    char ch, *rsl = (char*)malloc(sizeof(char) * 100);
    int idx = 0;
    Stack *stack = new Stack{NULL};
    for(int i = 0; i < strlen(str); i++){
        ch = str[i];
        //--------------------postfix--------------------
        switch(ch){
            case '(':
                push(stack, ch);
                break;
            case ')':
                while(!empty(stack) && (ch=pop(stack)) != '(')
                    rsl[idx++] = ch;
                break;
            case '+': case '-': case '*': case '/': case '^':
                while(priority(top(stack)) >= priority(ch))
                    rsl[idx++] = pop(stack);
                push(stack, ch);
                break;
            default:
                rsl[idx++] = ch;
        }
    }
    //rest
    while(!empty(stack))
        rsl[idx++] = pop(stack);
    return &rsl[0];
}

char* infixToPrefix(char str[100]){
    char ch, *rsl = (char*)malloc(sizeof(char) * 100);
    int idx = 0;
    Stack *stack = new Stack{NULL};
    Stack *prefix = new Stack{NULL};
    for(int i = strlen(str)-1; i >= 0; i--){
        ch = str[i];
        //--------------------prefix--------------------
        switch(ch){
            case ')':
                push(stack, ch);
                break;
            case '(':
                while(!empty(stack) && (ch=pop(stack)) != ')')
                    push(prefix, ch);
                break;
            case '+': case '-': case '*': case '/': case '^':
                while(priority(top(stack)) > priority(ch))
                    push(prefix, pop(stack));
                push(stack, ch);
                break;
            default:
                push(prefix, ch);
        }
    }
    //rest
    while(!empty(stack))
        push(prefix, pop(stack));

    while(!empty(prefix))
        rsl[idx++] = pop(prefix);
    return rsl;
}

int main(void){
    char str[100];

    printf("?????J?????B?????G");
    scanf(" %s", str);
    printf("????: %s\n", infixToPostfix(str));
    printf("?e??: %s\n", infixToPrefix(str));
    system("pause");
    return 0;
}