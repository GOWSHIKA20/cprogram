#include <stdio.h>
#include<conio.h>
int main()
{
int n,c=0;
printf("enter the n:");
scanf("%d",&n);
while(n!=0)
{
    n=n/10;
    c++;
}
printf("%d",c);
}
