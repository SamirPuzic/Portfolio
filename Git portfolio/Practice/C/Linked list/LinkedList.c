#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct LinkedList{
    struct node* firstElement;
    struct node* lastElement;
    int i;
};

void initialization(struct LinkedList *list){
    list->firstElement=NULL;
    list->lastElement=NULL;
    list->i=0;
}

struct node* addToFront(struct LinkedList* list, int new_data){
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=new_data;
    node->next=NULL;
    if(list->i==0){
        list->firstElement=node;
        list->lastElement=node;
    }
    else{
        node->next=list->firstElement;
        list->firstElement=node;
    }
    list->i++;
    return node;
}

struct node* addToBack(struct LinkedList* list, int new_data){
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=new_data;
    node->next=NULL;
    if(list->i==0){
        list->firstElement=node;
        list->lastElement=node;
    }
    else{
        list->lastElement->next=node;
        list->lastElement=node;
    }
    list->i++;
    return node;
}

void print(struct LinkedList list){
    for(int i=0; i<list.i; i++){
        printf("%d\n",list.firstElement->data);
        list.firstElement=list.firstElement->next;
    }
}

struct node* addNodeToIndex(struct LinkedList* list, int index, int new_data){
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=new_data;
    node->next=NULL;
    if(index>list->i){
        printf("Index is greater then list size!!");
        return 0;
    }
    if(index==0){
        addToFront(list, new_data);
    }
    if(index==list->i){
        addToBack(list, new_data);
    }
    struct node* current_node=list->firstElement;
    for(int i=0; i<index-1; i++){
        current_node=current_node->next;
    }
    node->next=current_node->next;
    current_node->next=node;
    list->i++;
    return node;
}

int main(){
    struct LinkedList list;
    initialization(&list);
    printf("Func add to front:\n");
    addToFront(&list, 1);
    addToFront(&list, 2);
    addToFront(&list, 3);
    print(list);
    printf("Func add to back:\n");
    addToBack(&list, 5);
    addToBack(&list, 6);
    addToBack(&list, 7);
    print(list);
    addNodeToIndex(&list,3,5000);
    printf("Print treci:\n");
    print(list);
    return 0;
}