#include<stdio.h>
#include<stdlib.h> 
#include<conio.h> 
#define MAX 4
int ch, front = 0, rear = -1, count=0; 
char q[MAX], item;
void insert() 
{
if(count == MAX) 
printf("\nQueue is Full");
else {
rear = (rear + 1) % MAX; 
q[rear]=item;
count++; 
}
}
void del() 
{
if(count == 0)
printf("\nQueue is Empty"); 
else
{
if(front > rear && rear==MAX-1) 
{
front=0; rear=-1; count=0; 
}
else 
{
item=q[front];
printf("\nDeleted item is: %c",item); 
front = (front + 1) % MAX;
count--; 
}
} 
}
void display() 
{
int i, f=front, r=rear; 
if(count == 0)
printf("\nQueue is Empty"); 
else
{
printf("\nContents of Queue is:\n"); 
for(i=f; i!=r; i=(i+1)%MAX)
{
putch(q[i]);
} 
printf("%c\t",q[i]);
}
}
void main() 
{
do
{
printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit"); 
printf("\nEnter the choice: ");
scanf("%d", &ch); 
switch(ch)
{
case 1: printf("\nEnter the character / item to be inserted: "); 
item=getch();
insert(); 
break;
case 2: del();
break;
case 3: display(); 
break;
case 4: exit(0); 
break;
} 
}while(ch!=4); 
getch();
}