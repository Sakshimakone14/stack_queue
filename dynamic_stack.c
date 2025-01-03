#include<stdio.h>
#include <stdlib.h>
typedef struct stack
 {
      int data;
      struct stack *next;
 }NODE;
NODE *top;
void init()
 {
     top==NULL;
 }
int isempty()
 {
     if(top==NULL)
        return 1;
    else
        return 0;    
 }
void push(int num)
 {
    NODE *newnode;
    newnode=(NODE *)malloc(sizeof(NODE));
   newnode->data=num;
   newnode->next=top;
   top=newnode;
   printf("Push succ............");
 } 
int pop()
 { 
       int num;   
      NODE *temp;  
     if(isempty())
        printf("stack is empty");
     else
       {
             temp=top;
             num=temp->data;
             top=top->next;
             free(temp);
             return num;
       }   
 }
 void disp()
  {
        NODE *temp;
        for(temp=top;temp!=NULL;temp=temp->next)
           printf("%d\n",temp->data);
  }
 int main()
{
    int ch,num;
    init();
    do
     {
               printf("Enter your chioce=1-push \n 2-pop \n 3-disp= ");
                  scanf("%d",&ch);
              switch(ch)
                {
                    case 1:printf("Enter value= ");
                                     scanf("%d",&num);
                                 push(num);
                                 break;
                   case 2:pop(); 
                                break;
                  case 3:disp();
                                break;                                   
                }          
     }while(ch<4);
}      
