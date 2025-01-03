#include<stdio.h>
#define MAX 5
 struct stack
  {
       int a[MAX];
       int top;
  };
 void init(struct stack *s)
  {
      s->top=-1;
  }
 int isempty(struct stack *s)
 {
     if(s->top==-1)
       return 1;
    else
       return 0;   
 } 
int isfull(struct stack *s) 
{
     if(s->top==MAX-1)
       return 1;
    else
       return 0;
}
void push(struct stack *s,int num)
{
   if(isfull(&s))
    {
         printf("Stack is full");
    }
  else
    {
       s->top++;
       s->a[s->top]=num;
       printf("Push successfully");
    }  
} 
void pop(struct stack *s)
 {
            int num;
            if(isempty(&s))
               {
                     printf("Stack is empty");
               }
            else
            {   
            num=s->a[s->top];
            s->top--;
            printf("pop val= %d",num); 
            }   
 }
 void disp(struct stack *s)
  {
         int i;
         for(i=s->top;i>=0;i--)
          {
               printf("%d\n",s->a[i]);
          }
  }
int main()
{
    int ch,num;
    struct stack *s;
    init(&s);
    do
     {
               printf("Enter your chioce=1-push \n 2-pop \n 3-disp= ");
                  scanf("%d",&ch);
              switch(ch)
                {
                    case 1:printf("Enter value= ");
                                     scanf("%d",&num);
                                 push(&s,num);
                                 break;
                   case 2:pop(&s); 
                                break;
                  case 3:disp(&s);
                                break;                                   
                }          
     }while(ch<4);
}  
