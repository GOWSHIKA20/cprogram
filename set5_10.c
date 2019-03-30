int main()
{
    int a,b,c=1,d=0;
    printf("enter the a value:");
	scanf("%d",&a);
	while(c<a)
	{
		c=c*2;
		if(c==a)
		{
			d=1;
			break;
		}
			
	}
	if(d==1)
	{
	printf("yes");
	}
	else
	{
	printf("no");
	}
    return 0;
}
