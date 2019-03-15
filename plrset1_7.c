int main()
{
    char ch[20];
    int i,t;
    printf("enter the ch");
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(i%2==0)
        {
            t=ch[i];
            ch[i]=ch[i+1];
            ch[i+1]=t;
        }
    }
    for(i=0;ch[i]!='\0';i++)
    {
        printf("%c",ch[i]);
    }

    return 0;
}
