#include<stdio.h>
#include <stdlib.h>
#define MAX 10
 struct queue
  {
      int a[MAX];
      int rear,front;
  }*q;
 void initq()
  {
    q=(struct queue *)malloc(sizeof(struct queue));
        q->front=q->rear=-1;
  }
int isempty()
 {
      if(q->front==-1)
        return 1;
     else
       return 0;   
 }
int isfull()
{
      if(q->rear==MAX-1 || (q->rear+1)%MAX==q->front)
         return 1;
     else
        return 0;    
}
void insert(int num)
 {
      if(isfull())
        printf("Queue is overload");
     else
       {
           if(q->front==-1)
             q->front=0;
          q->rear=(q->rear+1)%MAX;
          q->a[q->rear]=num;
          printf("Inserted succ.................");
       }    
 }
void delq()
 {
      int num;
      if(isempty())
         printf("Queue is empty....");
     else
     {
        num=q->a[q->front];
        if(q->front==q->rear)
        {
          q->front=q->rear=-1;
          }
       else
       {   
       q->front=(q->front+1)%MAX;
       }
       printf("Delete succ...........");   
     }             
 }
 /*void disp()
  {
      int i;
      //for(i=q->front;i<=q->rear;i++)
      i=q->front;
      do{
        {
                printf("%d\t",q->a[i]);
                i++;
        }
       }while(i<=q->rear); 
  }*/
  void disp() {
    if (isempty()) {
        printf("Queue is empty\n");
        return;
    }
    
    int i = q->front;
    printf("Queue elements: ");
    while (1) {
        printf("%d\t", q->a[i]);
        if (i == q->rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

void main()
 {
    int ch,num;
    do
     {
          printf("Enter your chioce= 1-insert \n 2-delete \n 3-disp=");
            scanf("%d",&ch);
         switch(ch)   
          {
         case 1:printf("Enter val= ");
                     scanf("%d",&num);
                   insert(num);
                   break;
        case 2:delq();
                   break;
        case 3:disp();
                    break;  
          }                                   
     }while(ch<4);
 }       
