int main()
{
    char s1[20],s2[20];
    int i,a=0,b=0,j;
    printf("enter the s1&s2:");
    scanf("%s%s",s1,s2);
    for(i=0;s1[i]!='\0';i++)
    {
        a++;
    }
    for(j=0;s2[j]!='\0';j++)
    {
        b++;
    }
    if(a>b)
    printf("%s",s1);
    else if(b>a)
    printf("%s",s2);
    else
    printf("%s",s1);
    
    return 0;
}
