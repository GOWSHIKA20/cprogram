int main()
{
    int i=0,n,t,r,s[120],j=0;
    printf("enter the n:");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
       r=t%10;
       s[i]=r;
       t=t/10;
       i++;
       j=j+1;
    }
    for(i=j-1;i>=0;i--)
    {
        printf("%d\t",s[i]);
    }
    
return 0;
}
