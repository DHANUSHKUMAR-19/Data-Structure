#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *left;
    struct node *right;
    int height;
};
typedef struct node * NODE;
int getHeight(NODE n){
 if(n==NULL)
   return 0;
 return n->height;
}
NODE createnode(int key){
    NODE new=malloc(sizeof(NODE));
    new->info=key;
    new->left=NULL;
    new->right=NULL;
    new->height=1;
    return new;
}
int getbalancefactor(NODE n){
    if(n==NULL){
        return 0;
    }
    return getHeight(n->left)-getHeight(n->right);
}
NODE leftrotate(NODE y){
    NODE x=y->left;
    NODE T2=x->right;
    x->right=y;
    y->left=T2;
    y->height=max(getHeight(y->right),getHeight)


}