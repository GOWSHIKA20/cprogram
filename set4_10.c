int main()
{
    int n,i;
    int a=1,b=1,c;
    printf("enter the n:");
    scanf("%d",&n);
    printf("%d  %d  ",a,b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;
    }
    
return 0;
}
