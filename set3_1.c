int main()
{
	int s=0,m,a,n,d,i;
	scanf("%d%d%d",&n,&a,&d);
	for(i=0;i<n;i++)
	{
	
		s=s+a;
		a=a+d;
	}
	printf("%d\n",s);
return 0;
}
