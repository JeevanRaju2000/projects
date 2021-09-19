#include<stdlib.h>
#include<stdio.h> 
#include<string.h>
#define max_size 5 
int stack[max_size],top = -1; int temp;
int ch,count=0,item;

int main() 
{ 
    do { 
 printf("\n\n--------STACK OPERATIONS-----------\n");
 printf("1.Push\n");
 printf("2.Pop\n");
 printf("3.Palindrome\n");
 printf("4.Exit\n");
 printf("-----------------------");
 printf("\nEnter your choice:\t"); 
 scanf("%d",&ch); 
 switch(ch) 
 { 
 case 1:printf("Enter an element to be pushed: "); scanf("%d", &item); 
 push(); display();
 break; 
 case 2: temp=pop(); display(); 
 break; 
 case 3: 
 pali();
 break; 
 case 4: 
 exit(0); 
 break; 
 default: 
 printf("\nInvalid choice:\n"); 
 break; 
 } 
 } while(ch!=4);
getchar();
} 
void push() //Inserting element into the stack
{ 
if(top==(max_size-1)) 
 { 
 printf("\nStack is Overflow");
 } 
else
 { 
 stack[++top]=item;
 } 
} 
void pop() //deleting an element from the stack
{ 
int ret; 
if(top==-1)
 { 
 printf("Stack is Underflow");
 } 
else
 { 
 ret=stack[top--]; 
 printf("\nThe poped element: %d: ",item); 
 }
 } 
void pali() 
{ 
int i,j;
int flag=0;
for(i=0,j=top;i<j;i++,j--)
{
    if(stack[i]!=stack[j])
    flag=1;break;
}
if(flag==0)
printf("\n Stack contents are palindrome");
else
printf("\n Stack contents are not palindrome");
}  
void display() 
{ 
int i; 
if(top==-1)
 { 
 printf("\nStack is Empty:");
 } 
else
 { 
 printf("\nThe stack elements are:\n" );
 for(i=top;i>=0;i--) 
 { 
 printf("%d\n",stack[i]); 
 } 
 } 
}