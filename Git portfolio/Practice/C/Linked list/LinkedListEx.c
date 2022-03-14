#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[20];
    char lastname[20];
    int mark;
};

struct node{
    struct student student;
    struct node *next;
    struct node *prev;
};


struct LinkedList{
    struct node *firstElement;
    struct node *lastElement;
    int i;
};

void initialization(struct LinkedList* list){
    list->firstElement=NULL;
    list->lastElement=NULL;
    list->i=0;
}

void print(struct LinkedList list){
    for(int i=0; i<list.i; i++){
        printf("Name: %s, Lastname: %s, Grade: %d \n",   list.firstElement->student.name, 
                                                        list.firstElement->student.lastname, 
                                                        list.firstElement->student.mark);
        list.firstElement=list.firstElement->next;
    }
}

struct node* addNodeToFront(struct LinkedList* list, struct student* new_student){
    struct node* node=(struct node*)malloc(sizeof(struct node));
    for(int i=0; i<20; i++){
        node->student.name[i]=new_student->name[i];
        node->student.lastname[i]=new_student->lastname[i];     
    }
    node->student.mark=new_student->mark;
    node->next=NULL;
    node->prev=NULL;
    if(list->i==0){
        list->firstElement=node;
        list->lastElement=node;
    }
    else{
        node->next=list->firstElement;
        list->firstElement->prev=node;
        list->firstElement=node;
    }
    list->i++;
    return node;
}

struct node* addNodeToBack(struct LinkedList* list, struct student* new_student){
    struct node* node=(struct node*)malloc(sizeof(struct node));
    for(int i=0; i<20; i++){
        node->student.name[i]=new_student->name[i];
        node->student.lastname[i]=new_student->lastname[i];
    }
    node->student.mark=new_student->mark;
    node->next=NULL;
    node->prev=NULL;
    if(list->i==0){
        list->firstElement=node;
        list->lastElement=node;
    }
    else{
        node->prev=list->lastElement;
        list->lastElement->next=node;
        list->lastElement=node;
    }
    list->i++;
    return node;
}

int main(){

struct student samir={"Samir","Puzic",5};
struct student timur={"Timur","Hadzic",3};
struct student kenan={"Kenan","HH",2};
struct student kerim={"Kerim","HH",1};

struct LinkedList list;
initialization(&list);
addNodeToFront(&list,&samir);
addNodeToBack(&list,&timur);
addNodeToBack(&list,&kerim);
//addNodeToIndex(&list,&kenan,1);
print(list);
}