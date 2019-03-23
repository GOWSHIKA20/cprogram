int main()
{
    int i,a[20],n,t=0,j;
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
    if(a[i]<a[j])
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    }
}
    printf("%d",a[0]);

    return 0;
}
