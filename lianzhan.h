#ifndef lianzhan_h
#define lianzhan_h

#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<stdlib.h>
typedef int dataType;
typedef struct node
{ dataType data;
	struct node *next;
}LinkStack;

int priority(char x)
{ switch(x)
	{ case '+':
	  case '-':
          case '=':return 1;
	  case '*':
          case '/':return 2;
	  case '(':return 3;
	}
}
double compute(double x,double y,char op)
{
	switch(op)
	{ case '+':return x+y;
	  case '-':return x-y;
	  case '*':return x*y;
	  case '/':return x/y;
	}
}
#endif
