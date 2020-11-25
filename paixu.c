# include“paixu.h"


void xuanze(int A[],int n) 
{  
	int i,j,k;  
	for(i=0,b++;i<n-1;i++,b++)  
	{  
		k=i;  
		for(j=i+1,b++;j<n;j++,b++)  
			if(A[j]<A[k])  
			{ k=j;b++;}  
		if(k!=i)    
		{
			bb+=change(&A[i],&A[k]);   
		}
	}   
} 
void maopao(int A[],int n)  
{  
	int i,j;  
	for (i = n -1 ; i>=0 ;i--)  
	{  
		for (j = 0; j<i; j++)  
		{  
			if(A[j]>A[j+1])
				cc+=change(&A[j],&A[j+1]);
		}  
	}  
}  
void Quicksort(int A[],int L,int R)
{  
	int i=L,j=R,T=A[L];  
	if(L>R)  return;  
	while(i!=j) 
	{  
		while(A[j]>=T&&i<j){j--;d++;}  
		while(A[i]<=T&&i<j){i++;d++;}  
		if(i<j)dd+=change(&A[i],&A[j]);   
	}  
	if(L!=i)
		dd+=change(&A[L],&A[i]);       
	Quicksort(A,L,i-1);          
	Quicksort(A,i+1,R);           
}  
void InsertSort (int A[],int n) 
{
	int i,j,k;
	for(i=1;i<n;i++)
	{ k= A[i];
	  j=i-1;
	  while( j>=0&& A[j]>k)
	  {  A[j+1]= A[j];
		  j--;
		}
	}
	 A[j+1]=k;
}

int change(int *a,int *b) 
{  
	int c=*a;  
	*a=*b;  
	*b=c;  
	return 3;
}  

  int main()
{
	int a[N],i;
	srand(time(0));
	for (i=0;i<N;i++)
		a[i]=rand()%100;
	printf("初始数据为;");
	for(i=0;i<N;i++)
		printf(" %d",a[i]);
	printf("\n");
/*	maopao(a,N);

	xuanze(a,N);

	Quicksort(a,0,N-1);
*/
        InsertSort(a,N);
        printf("排序后数据:");

	for (i=0;i<N;i++)
		printf(" %d ",a[i]);
	        printf("\n");
}
  

