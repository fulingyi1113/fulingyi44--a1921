#include"Double_Queue.h"

#include<stdio.h>
#include<stdlib.h>
#define NUM 20
double_Queue initial(){

	double_Queue Q;
	Q=malloc(sizeof(struct PtrToNode));
	if(Q==NULL){
		puts("queue arrange fail");
		exit(1);
	}

	Q->array=malloc(sizeof(Item)*NUM);
	if(Q->array==NULL){
		puts("array arrange fail");
		free(Q);
		exit(1);	
	}

	Q->size=0;
	Q->capacity=NUM;
	Q->front=1;
	Q->rear=0;
	return Q;
}

int isEmpty(double_Queue Q){

	return Q->size==0;
}

int isFull(double_Queue Q){

	return Q->size==Q->capacity;
}

void push(Item item,double_Queue Q){
	if(!isFull(Q)) 
	{
		if(Q->front==0)
			Q->front=Q->capacity-1;
		else Q->front--;
		Q->array[Q->front]=item;
		Q->size++;
	}
}

void pop(double_Queue Q){
	if(!isEmpty(Q)){
		if(Q->front==Q->capacity-1)
			Q->front=0;
		else Q->front++;
		Q->size--;
	}

}

void inject(Item item,double_Queue Q){
	if(!isFull(Q)) 
	{
		if(Q->rear==Q->capacity-1)
			Q->rear=0;
		else Q->rear++;
		Q->array[Q->rear]=item;
		Q->size++;
	}

}

void eject(double_Queue Q){
	if(!isEmpty(Q)){
		if(Q->rear==0)
			Q->rear=Q->capacity-1;
		else Q->rear--;
		Q->size--;
	}

}

void printQueue(double_Queue Q){

	if(!isEmpty(Q)){
		int i=Q->front;
		while(i!=Q->rear){
			printf("%d\t",Q->array[i]);
			if(i==Q->capacity-1)
				i=0;
			else i++;
		}
		printf("%d\n",Q->array[Q->rear]);
	}

}
int main(){

	double_Queue Q;
	Q=initial();
	push(2,Q);
	inject(4,Q);
	push(6,Q);
	inject(1,Q);
	push(22,Q);
	inject(45,Q);
	printQueue(Q);
	pop(Q);
	pop(Q);
	eject(Q);
	printQueue(Q);
}
