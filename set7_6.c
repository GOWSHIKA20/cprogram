int main()
{
    int n,i,c=0;
    printf("enter the n:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		c=1;
		}
		if(c==1)
		printf("no");
		else
		printf("yes");
    return 0;
}
