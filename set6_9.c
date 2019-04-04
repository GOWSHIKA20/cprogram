int main()
{
    int n,r,t,s=0;
    printf("enter the n:");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        s++;
        t=t/10;
    }
    printf("%d",s);
    return 0;
}
