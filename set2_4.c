int main()
{
    int a,b,i,l=0;
    printf("enter the a:");
    scanf("%d",&a);
    printf("enter the b:");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        if(i%2!=0)
    printf("%d",i);
    }
    return 0;
}
