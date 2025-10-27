#include<stdio.h>
void main()
{
int stack [10];
int ch,i,size,val,top=-1;
printf("enter the size of the stack:");
scanf("%d",&size);
do
{
printf("\n MENU\n1.push\n2.pop\n3.display\n4.exit");
printf("\nEnter your choise(1-4):");
scanf("%d",&ch);
switch(ch)
{
case 1:
if(top==size-1)
printf("stack Overflow");
else
{
top++;
printf("enter the value to push:");
scanf("%d",&val);
stack[top]=val;

printf("\nVAlue pushed");
}
break;
case 2:
if(top==1)
printf("\nStack Underflow");
else
{
val=stack[top];
printf("\nValue popped is :%d",val);
top--;
}
break;
case 3:
if(top==-1)
printf("Stack is empty");
else
{
printf("the stack is : ");
for(i=top;i>=0;i--)
printf("%d",stack[i]);
}
case 4:break;
default:printf( "Wrong choice");
}
}while(ch!=4);
}

