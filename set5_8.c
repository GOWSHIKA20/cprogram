int main()
{
    int a[20],i,t=0,n,avg=0;
    printf("enter the n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    t=t+a[i];
	}
	avg=t/n;
	printf("%d",avg);
	
    return 0;
}
