#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 5

void push()
{
     if (top==STACK_SIZE)
     printf("The stack is in overflow condition\n");
     else
     { 
          top++;
          st[top]=item;
}
}
int pop ()
{
int del_item
if(top==-1)
printf('stack underflow!No item\n");
else
{
del_item
top--;
return del_item;
}
}
void display()
{
if (top==-1)
printf("stack is empty\n");
nothing to display
for(i=0;i<=top;i++)
printf("%d\t",st[i]);
} 
}
void main()
{
    int x;
    printf("Enter the coice\n");
    scanf("%d",&choice\n");
    while(1)
    {switch (choice)
    {
        case1: printf("Enter the item to be inserted:\n")
               scanf("%d",&item);
               push();
               break;
        case2: a=pop();
               printf("%d",a);
               printf("This item is removed\n");
               break;
        case3: Display();
               break;
        default: exit(0);
        break;                     
    }
    }
    }