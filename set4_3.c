int main()
{
	int a=0,c,i;
	char b[100];
	printf("enter the string:");
	scanf("%[^\n]s",&b);
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==' ')
		a++;
		}
		printf("%d",a);
return 0;
}
