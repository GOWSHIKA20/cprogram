int main()
{
    char s[20];
    int i,j,l=0;
    printf("enter the string:");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        l++;
    }
    for(j=l;s[j]>=0;j--)
    {
        printf("%c",s[j]);
    }
