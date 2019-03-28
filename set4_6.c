int main()
{
    char s[100];
    int i,c=0;
    printf("enter the string:");
    scanf("%[^\n]",s);
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]==' ')
        continue;
        else
        c++;
        }
    printf("%d",c);

    return 0;
}
