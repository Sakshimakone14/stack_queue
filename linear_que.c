#include<stdio.h>
#include <stdlib.h>
#define MAX 10
 struct queue 
 { 
     int a[MAX];
     int front,rear;
 }*q;
void initq()
  { 
     q = (struct queue *)malloc(sizeof(struct queue));
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
    if(q->rear==MAX-1)
      return 1;
    else
       return 0;   
  }
void enque(int num)
 {
   if(isfull())
    {
       printf("Queue is overflow");
    }   
  else
    {
        if(q->front==-1)
           q->front=0;
           q->rear++;
           q->a[q->rear]=num;
           printf("Inserted successfully.........");
    }  
 }
void deque()
 {
      int num;
      if(isempty())
        printf("Queue is empty");
     else
       {
           num=q->a[q->front];
           q->front++;
           printf("Deleted successfully..........");  
       }   
 }
 void reverse()
  {
     int i;
     for(i=q->rear;i>=q->front;i--)
      {
         printf("%d\t",q->a[i]);
      }
   }
 int main()
  {
       int ch,num;
       initq();
      do
       {
         printf("Enter your chioce= 1-enque \n 2-deque \n 3-reverse= ");
           scanf("%d",&ch);
         switch(ch)
          {
             case 1: printf("Enter number= ");
                          scanf("%d",&num);
                          enque(num);
                         break;
             case 2:deque();
                          break;
             case 3:reverse();
                          break;                          
          }  
       }while(ch<4);
  }  
