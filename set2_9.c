int main()
{
    int m,n,s,r,i,t;
    printf("enter the m & n:");
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        t=i;
        s=0;
        while(t!=0)
        {
            r=t%10;
            s=s+r*r*r;
            t=t/10;
        }
        if(s==i)
        printf("%d",i);
    }
