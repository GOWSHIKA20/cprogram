int main()
{
    int n,i,fac=1;
    printf("enter the n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("%d",fac);

    return 0;
}
