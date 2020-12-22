#include <stdio.h>
#define SIZE 5
void init(int st[ ]);
void print(int st[ ]);
int isFull(void);
int isEmpty(void);
int push(int st[ ],char item);
int pop(int st[ ]);
int top=0;
int main() {
int st[SIZE];
int i,j;
init(st); 
for ( i= 1; i<7; i++)
if (isFull())   
          printf("stack overflow, cannot push %d\n",i);  
          else 	push(st,i);  
print(st);  
for ( j= 1; j<6; j++)  
if (isEmpty())   
          printf("stack Underflow, cannot pop\n");  
           else {   printf("top is %d ", top);   
            printf("pop %d \n",pop(st));  }
}

void init(int st[ ])
{
  for (int i=0;i<SIZE;i++)
      st[i]=0;
      top=0;
}
void print(int st[ ])
{
  printf("Stack : ");
  for (int i=SIZE-1;i>=0;i--)
    printf("%d ",st[i]);
    printf("\n");
}
int isFull(void)
{
  return top == SIZE;
}
int isEmpty(void)
{
  return top == 0;
}
int push(int st[ ],char item)
{
  if(top<SIZE)
  {
    st[top++] = item;
    return 1;
  }
  else{
      printf("Stack Over Flow \n");
      return 0;
  }
}
int pop(int st[ ])
{
  char item;
  if (top>0)
  {
    item == st[--top];
    return item;
  }
  else{
    printf("Stack UnderFlow \n");
    return 0;
  }
}
