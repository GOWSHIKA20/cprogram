int main()
{
    int n,t,s=0,r;
    printf("enter the n:");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        s=s+r*r*r;
        t=t/10;
    }
if(n==s)
printf("yes");
else
printf("no");
    
    

    return 0;
}
