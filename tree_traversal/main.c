#include <stdio.h>
#include <stdlib.h>
struct node{
int info;
struct node *lchild;
struct node *rchild;
};
typedef struct node * NODE;
NODE getnode()
{
    NODE temp;
    temp=malloc(sizeof(NODE));
    if(temp==NULL)
    {
        printf("Memory could't be allocated\n");
        exit(0);
    }
    temp->rchild=NULL;
    temp->lchild=NULL;
    return temp;
}
NODE createbstree()
{
    NODE newnode=NULL;
    int data=0;
    printf("Enter the element('0' if no data)\t");
    scanf("%d",&data);
    if(data)
    {
        newnode=getnode();
        newnode->info=data;
        printf("Left child of %d :",newnode->info);
        newnode->lchild=createbstree();
        printf("\nRight child of %d\n",newnode->info);
        newnode->rchild=createbstree();
    }
    return newnode;
}
void preorder(NODE root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->info);
        preorder(root->lchild);
        preorder(root->rchild);
    }
}
void inorder(NODE root)
{
    if(root!=NULL)
    {
        inorder(root->lchild);
        printf("%d\t",root->info);
        inorder(root->rchild);
    }

}
void postorder(NODE root)
{
    if(root!=NULL)
    {
        postorder(root->lchild);
        postorder(root->rchild);
        printf("%d\t",root->info);
    }
}
int main()
{
    NODE root=NULL;
    root=createbstree();
    int ch;
    for(;;)
    {
        printf("\nChooose the traversal mode\n");
        printf("\n1.Inorder\n2.Preorder\n3.Postorder\n");
        scanf("%d",&ch);
        switch(ch)
    {
        case 1:inorder(root);
        break;
        case 2:preorder(root);
        break;
        case 3:postorder(root);
        break;
        default:printf("Invalid choice\n");
    }

    }

    return 0;
}
