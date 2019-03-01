#include <stdio.h>
#include<conio.h>
int main()
{
int n,i,j,k,sum=0,a[20];
printf("enter the n:");
scanf("%d",&n);
printf("enter the k:");
scanf("%d",&k);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
if(k<=n)
for(i=0;i<k;i++)
{
    sum=sum+a[i];
}
printf("%d",sum);
}
