#include<stdio.h>
void main()
{
int n,i;
int first=0,second=1,next;
printf("enter the no of terms");
scanf("%d",&n);
printf("fibonacci series");
for(i=1;i<=n;i++)
{
printf("%d",first);
next=first+second;
first=second;
second=next;
}
}
