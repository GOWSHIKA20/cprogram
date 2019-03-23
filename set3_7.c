int main()
{
    char a[10];
    int flag=0,i;
    printf("enter the a:");
    scanf("%s",a);
    int n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            flag=0;
        }
        else
        {
            flag=1;
            printf("no");
            break;
        }
    }
    if(flag==0)
    {
        printf("yes");
    }
return 0;
}
