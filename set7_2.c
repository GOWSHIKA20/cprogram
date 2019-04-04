int main()
{
    char s[20];
    int i,k=0,n=0;
    printf("enter the string:");
    scanf("%[^\n]",s);
    for(i=0;s[i]!='\0';i++)
    n++;
    for(i=0;i<n;i++)
    {
        
        if((s[i]=='1')||(s[i]=='0'))
        k=1;
    }
    if(k==1)
    printf("yes");
    else
    printf("no");
    return 0;
}


