void main()
{
char a[100];
int i;
clrscr();
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')
{
if(a[i]<97)
{
a[i]=a[i]+32;
}
}
else
{
i++;
}
a[0]=a[0]-32;
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
if(a[i+1]>=97)
{
a[i+1]=a[i+1]-32;
}
}
}
printf("%s",a);
getch();
}
