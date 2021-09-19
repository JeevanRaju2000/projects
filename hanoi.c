#include<stdio.h>
#include<math.h>

void tower(int n, int source, int temp, int dest)
{
    if(n==0) return;
    tower(n-1,source,dest,temp);
    printf("\n Move disc %d from %c to %c",n,source,dest);
    tower(n-1,temp,source,dest);
}

void main()
{
    int n;
    
    printf("\n Enter no. of discs : \n");
    scanf("%d", &n);
    tower(n,'A','B','C');
    printf("\n Total moves are: %d", (int)pow(2,n)-1);
    
}