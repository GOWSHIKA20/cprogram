int main()
{
    char s[100];
    int i;
    printf("enter the string:");
    scanf("%[^\n]",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
            printf("%c",s[i]);
        }
    }
        

    return 0;
}
