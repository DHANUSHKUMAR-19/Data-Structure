#include <stdio.h>
#include <stdlib.h>
#define max 100
#include<string.h>
#include<ctype.h>
#include<math.h>
struct node{
char info;
struct node *llink;
struct node *rlink;
};
typedef struct node * NODE;
NODE getnode()
{
    NODE temp=malloc(sizeof(NODE));
    if(temp==NULL)
    {
        printf("MEmory not allocated\n");

    }
    return temp;
}
NODE create_tree(char postfix[max])
{
if(postfix[0]=='\0')
{return NULL;
}
int i,top=-1;
NODE stack1[max];
NODE newnode;
char symb;
for(i=0;postfix[i]!='\0';i++)
{
    symb=postfix[i];
    newnode=getnode();
    newnode->info=symb;
    newnode->llink=NULL;
    newnode->rlink=NULL;
    if(isdigit(symb))
    {
        stack1[++top]=newnode;
        continue;
    }
    switch(symb)
    {
    case  '+':
    case   '-':
    case  '*':
    case  '/':newnode->rlink=stack1[top--];
                newnode->llink=stack1[top--];
                stack1[++top]=newnode;
    break;
    default:return NULL;
}
}
return stack1[top--];
}
void preorder(NODE root)
{
    if(root!=NULL)
    {
        printf("%c\t",root->info);
        preorder(root->llink);
        preorder(root->rlink);
    }
}
float evaluate(NODE root)
{
    switch(root->info)
    {
    case '+':return (evaluate(root->llink)+evaluate(root->rlink));
    case '-':return(evaluate(root->llink)-evaluate(root->rlink));
    case '*':return(evaluate(root->llink)*evaluate(root->rlink));
    case '/':return(evaluate(root->llink)/evaluate(root->rlink));
    case '$':
    case '^':return(pow(evaluate(root->llink),evaluate(root->rlink)));
    default:return(root->info-'0');

    }
}

int main()
{
    NODE root;
    float res;
    char postfix[max];
    printf("Enter the postfix expression\n");
    gets(postfix);
    root=NULL;
    root=create_tree(postfix);
    if(root==NULL)
    {
        printf("Invalid expression\n");
        return 0;
    }
    preorder(root);
    res=evaluate(root);
    printf("Result after evaluation = %.2f\n",res);
    return 0;
}
