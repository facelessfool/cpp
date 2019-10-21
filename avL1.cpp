#include<iostream>
#include<stdio.h>

struct Node 
{
    struct Node *lchild;
    struct Node *rchild;
    int data;
    int height;
}*root=NULL;

int NodeHeight(struct Node *p){
    int hl,hr;
    hl=p &&p->lchild?p->lchild->height:0;
    hr=p &&p->rchild?p->rchild->height:0;

    return hl>hr?hl+1:hr+1;
    
}

int BalanceFactor(struct Node *p){
    hl=p &&p->lchild?p->lchild->height:0;
    hr=p &&p->rchild?p->rchild->height:0;

    return hl-hr;

}

struct Node * LLrotation(struct Node *p){
    struct Node *pl=p->lchild;
    struct Node *plr=pl->lchild;


};


struct Node *RInsert(struct Node *p,int key){
    struct Node *t=NULL;
    
    if(p=NULL){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=key;
        t->height=1;//starting height at 1.
        t->lchild=t->rchild=NULL;

        return t;
    }

    if(key<p->data)
        p->lchild=RInsert(p->lchild,key);
    else if(key>p->data)
        p->rchild=RInsert(p->rchild,key);
    p->height=NodeHeight(p);


    if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==1)
        return LLrotation(p);
    else if(BalanceFactor(p)==2 && BalanceFactor(p->rchild)==-1)
        return LRrotation(p);
    else if(BalanceFactor(p)=-2 && BalanceFactor(p->rchild)==-1)
        return RRrotation(p);
    else if(BalanceFactor(p)=-2 && BalanceFactor(p->rchild)==1)
        return RLrotation(p);



    return p;

}

