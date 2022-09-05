#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>
typedef struct _snode{
    int val;
    struct _snode *next;
} SNode;

typedef struct slinked_list{
    SNode *begin;
    int size; //quantos elementos existem na linkedlist
}LinkedList;

SNode *Snode_create(int val){
    SNode *snode = (SNode *) calloc(1,sizeof(SNode));
    snode->val = val;
    snode->next = NULL;
    return snode;
}
LinkedList *LinkedList_create(){
    LinkedList *linked_list=(LinkedList *)calloc(1,sizeof(LinkedList));
    linked_list->begin = NULL;
    return linked_list;
}
void add_first(LinkedList *L,int val){
    SNode *p= SNode_create(val);
    p->next=L->begin;
    L->begin=p;
    L->size++;
}
void add_last(LinkedList *L,int val){
    SNode *p= SNode_create(val);
    //se a lista ligada estiver vazia
    if(L->begin==NULL){
        L->begin=p;
    }else{
        //enquanto o p n for o ultimo elemento, prox
        SNode *aux=L->begin;
        while(p->next!=NULL){
            aux=aux->next;
        }
        //neste momento o aux aponta p o ultimo elemento da lista ligada
        //corrige o encadeamento
        aux->next=p;
        L->size++;
    }
}
void print_LL(LinkedList *L){
    SNode *p= L->begin;
    printf("L -> ");
    while(p!=NULL){
        printf("%d - ",p->val);
        p=p->next;
    }
}//fazer o main dps