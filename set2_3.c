#include<stdio.h>
int main()
{
  int n,i,k=0;
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    k=1;
    break;
  }
    if(k==0){
      printf("yes");
    else{
    printf("no");
}
