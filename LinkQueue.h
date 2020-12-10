#ifndef LinkQueue_h
#define LinkQueue_h

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef int dataType;
struct node
{
	dataType data;
	struct node *next;
};
typedef struct
{
	struct node *front,*rear;
}LinkQueue;
void initQueue(LinkQueue *q);
int Empty(LinkQueue *q);
void push(LinkQueue *q,dataType x);
void pop(LinkQueue *q);
dataType front(LinkQueue*q);
dataType back(LinkQueue *q);
int size(LinkQueue *q);

struct PtrToNode;
typedef struct PtrToNode *double_Queue;
typedef int Item;

double_Queue initial(void);
int isEmpty(double_Queue Q);
int isFull(double_Queue Q);
void push1(Item item,double_Queue Q);
void pop1(double_Queue Q);
void inject(Item item,double_Queue Q);
void eject(double_Queue Q);
void printQueue(double_Queue Q);



struct PtrToNode{
	int front, rear,size, capacity;
	Item *array;
};
#endif
