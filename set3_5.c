int main()
{
    int i,a[20],n,t=0,j,c;
    printf("enter the n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
    if(a[i]>a[j])
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    }
}
if(n%2==0)
{
    c=n/2-1;
printf("%d",a[c]);
}
else
{
c=n/2;
printf("%d",a[c]);
}
   return 0;
}
