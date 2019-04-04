int main()
{
    char s[20];
    int i,k;
    printf("enter the string:");
    scanf("%[^\n]",s);
    printf("enter the k:");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        
        printf("%c",s[i]);
    }
    return 0;
}
