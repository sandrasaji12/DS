#include<stdio.h>
int a[50],n,i,top=-1,ch,item;
void push();
void pop();
void display();
int main()
{
printf("enter the size of the array:");
scanf("%d",&n);
do
{
printf("\n 1. push \n 2.pop \n 3.display \n 4.exit");
printf("\n enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
break;
default:printf("\n wrong choice");
}
}
while(ch!=4);
return 0;
}
void push()
{
if(top==n-1)
{
printf("stack is overflow");
}
else
{
printf("enter the value");
scanf("%d",&item);
top=top+1;
a[top]=item;
}
}
void pop()
{
if(top==-1)
{
printf("stack is underflow");
}
else
{
top=top-1;
}
}
void display()
{
if(top==-1)
{
printf("\n stack underflow");
}
else
{
printf("\n array element are:\n");
for(i=0;i<=top;i++)
printf("%d \n",a[i]);
}
}

