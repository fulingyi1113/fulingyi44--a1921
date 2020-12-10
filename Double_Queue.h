#ifndef Double_Queue_h
#define Double_Queue_h

struct PtrToNode;
typedef struct PtrToNode *double_Queue;
typedef int Item;

double_Queue initial(void);
int isEmpty(double_Queue Q);
int isFull(double_Queue Q);
void push(Item item,double_Queue Q);
void pop(double_Queue Q);
void inject(Item item,double_Queue Q);
void eject(double_Queue Q);
void printQueue(double_Queue Q);

#endif

struct PtrToNode{
	int front;
	int rear;
	int size;
	int capacity;
	Item *array;
};
