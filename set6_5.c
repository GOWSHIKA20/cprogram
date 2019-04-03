int main()
{
	int n,t,s=0,r;
  printf("enter the n:");
	scanf("%d",&n);
  t=n;
	while(t!=0)
	{
		r=t%10;
		s=s+r;
		t=t/10;
		}
		printf("%d",s);
		return 0;
    }

