int main()
{

    
int n,m,d;
printf("enter the n&m:");
    scanf("%d%d",&n,&m);
   if(n>m)
   d=n-m;
   else
   d=m-n;
   if(d%2==0)
   printf("even");
   else
   printf("odd");
    
    
    
 return 0;
}
