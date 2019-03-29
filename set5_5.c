int main()
{
    int n,t,s=0,l=0,r;
    printf("enter the n:");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        s=s*10+r;
        t=t/10;
        l++;
    }
    printf("%d",l);

    return 0;
