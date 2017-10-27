#include <iostream>
#include<stdlib.h>
#include<limits.h>
using namespace std;
struct queue{
int capacity,front,rear,size;
int *array;
};

struct queue* createqueue(int capacity)
{
	struct queue *que=(struct queue*)malloc(sizeof(struct queue));
	que->capacity=capacity;
	que->front=que->size=0;
	que->rear=capacity-1;
	que->array=(int *)malloc(que->capacity * sizeof(int));
	return que;
}

int isfull(struct queue* que)
{
	return(que->capacity==que->size);
}
int isempty(struct queue* que)
{
	return(que->size==0);
}

void enqueue(struct queue* que,int item){
	if(isfull(que))
	{
		return;
	}
	que->rear=(que->rear+1)%que->capacity;
	que->array[que->rear]=item;
	que->size=que->size+1;
	cout<<"entered is"<<item<<endl;
}
int dequeue(struct queue* que)
{
	if(isempty(que))
	{
		return INT_MIN;
	}
	int item=que->array[que->front];
	que->front=(que->front+1)%que->capacity;
	que->size=que->size-1;
	return item;
}

int front(struct queue* que)
{
	if(isempty(que))
	{
		return INT_MIN;
	}
	return que->array[que->front];
}

int rear(struct queue* que)
{
	if(isempty(que))
	{
		return INT_MIN;
	}
	return que->array[que->rear];
	
}
int main() 

{
	struct queue* que=createqueue(1000);
	enqueue(que,9);
	enqueue(que,39);
	enqueue(que,29);
	enqueue(que,19);
	cout<<dequeue(que)<<endl;
	cout<<front(que)<<endl;
	cout<<rear(que)<<endl;
	
	return 0;
}