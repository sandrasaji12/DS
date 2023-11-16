#include <stdio.h>
#define SIZE 5
int items[SIZE];
int front = -1, rear = -1;
void enQueue(int element);
int deQueue();
void display();
int main() 
{
int x,choice;
  while(choice != 4) 
   {  
        printf("\n1.Insert \n2.Delete \n3.Display \n4.Exit");  
        printf("\nEnter the choice:");
        scanf("%d",&choice);  
        switch(choice) 
        {  
            case 1: 
             {
                printf("enter the element to insert");
                scanf("%d",&x);
                   
                enQueue(x);  
                break;  
            }  
            case 2: 
             {  
                deQueue();  
                break;  
            }  
            case 3:
            {  
                display();  
                break;  
            }  
            case 4:
            {  
                printf("Exit\n");  
                break;   
            }  
            default:
            {  
                printf("Enter valid option");  
            }
            }
            }  
return 0;
}
int isFull()
 {
  if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) return 1;
  return 0;
}
int isEmpty() 
{
  if (front == -1) return 1;
  return 0;
}
void enQueue(int element)
 {
  if (isFull())
    printf("\n Queue is full!! \n");
  else {
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    items[rear] = element;
    printf("\nInserted -> %d", element);
  }
}
int deQueue() 
{
  int element;
  if (isEmpty())
   {
    printf("\nQueue is empty !! \n");
    return (-1);
  }
   else 
   {
    element = items[front];
    if (front == rear)
     {
      front = -1;
      rear = -1;
    } 
   
    else
     {
      front = (front + 1) % SIZE;
    }
    printf("\nDeleted element -> %d \n", element);
    return (element);
  }
}
void display() 
{
  int i;
  if (isEmpty())
    printf(" \nEmpty Queue\n");
  else 
  {
    
    printf("\nItems -> ");
    for (i = front; i != rear; i = (i + 1) % SIZE)
   
     {
      printf("%d ", items[i]);
    }
    printf("%d ", items[i]);
    printf("\nFront -> %d and element=%d ", front,items[front]);
    printf("\nRear -> %d and element=%d\n", rear,items[rear]);
  }
}


