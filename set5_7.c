int main()
{
    int a[20],i,t=0,n,j;
    printf("enter the n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)	
		{
		if(a[i]<a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		}
	}
	printf("%d %d",a[0],a[n-1]);
	
    return 0;
}
