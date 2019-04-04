int main()
{
    int a[20],i,k,n,c=0;
    printf("enter the n&k:");
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        c=1;
    }
    if(c==1)
    printf("yes");
    else
    printf("no");
    
    return 0;
}
