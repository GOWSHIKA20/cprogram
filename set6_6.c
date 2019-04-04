int main()
{
    char s[20],a,z,A,Z;
    int i,f=0,n=0,c=0;
    printf("enter the string:");
    scanf("%[^\n]",s);
    for(i=0;s[i]!='\0';i++)
    {
    n++;
    }
        for(i=0;i<n;i++)
    {
    
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
        f=1;

if(s[i]>='0'&&s[i]<='9')

    c=1;
    }

if((f==1)&&(c==1))
printf("yes");
else
printf("no");

return 0;
}
